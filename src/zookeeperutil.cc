#include "zookeeperutil.h"
#include "mprpcapplication.h"
#include <semaphore.h>
#include <iostream>
#include <logger.h>

void global_watcher(zhandle_t *zh, int type,
					int state, const char *path, void *watcherCtx)
{
	if (type == ZOO_SESSION_EVENT)
	{
		if (state == ZOO_CONNECTED_STATE) // zkclient和zkserver连接成功
		{
			sem_t *sem = (sem_t *)zoo_get_context(zh);
			sem_post(sem);
		}
	}
}

ZkClient::ZkClient() : m_zhandle(nullptr)
{
}

ZkClient::~ZkClient()
{
	if (m_zhandle != nullptr)
	{
		zookeeper_close(m_zhandle); // 关闭句柄，释放资源
	}
}

// 连接zkserver
void ZkClient::Start()
{
	std::string host = MprpcApplication::GetInstance().GetConfig().Load("zookeeperip");
	std::string port = MprpcApplication::GetInstance().GetConfig().Load("zookeeperport");
	std::string connstr = host + ":" + port;

	m_zhandle = zookeeper_init(connstr.c_str(), global_watcher, 30000, nullptr, nullptr, 0);
	if (nullptr == m_zhandle)
	{
		LOG_INFO("zookeeper_init error!");
		exit(EXIT_FAILURE);
	}

	sem_t sem;
	sem_init(&sem, 0, 0);
	zoo_set_context(m_zhandle, &sem);

	sem_wait(&sem);
	LOG_INFO("zookeeper_init success!");
}

void ZkClient::Create(const char *path, const char *data, int datalen, int state)
{
	char path_buffer[128];
	int bufferlen = sizeof(path_buffer);
	int flag;
	flag = zoo_exists(m_zhandle, path, 0, nullptr);
	if (ZNONODE == flag) // path的znode节点不存在
	{
		// 创建指定path的znode节点了
		flag = zoo_create(m_zhandle, path, data, datalen,
						  &ZOO_OPEN_ACL_UNSAFE, state, path_buffer, bufferlen);
		if (flag == ZOK)
		{
			LOG_INFO("znode create success... path: %s", path);
		}
		else
		{
			LOG_INFO("znode create error... path:%s", path);
			exit(EXIT_FAILURE);
		}
	}
}

// 根据指定的path，获取znode节点的值
std::string ZkClient::GetData(const char *path)
{
	char buffer[64];
	int bufferlen = sizeof(buffer);
	int flag = zoo_get(m_zhandle, path, 0, buffer, &bufferlen, nullptr);
	if (flag != ZOK)
	{
		LOG_INFO("get znode error... path:%s", path);
		return "";
	}
	else
	{
		return buffer;
	}
}