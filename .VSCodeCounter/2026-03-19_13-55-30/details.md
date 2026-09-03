# Details

Date : 2026-03-19 13:55:30

Directory /mnt/f/项目/施磊合集/cpp-study-main/【高级】C++项目-实现分布式网络通信框架-rpc通信原理/C  实现分布式网络通信框架项目资料/C++实现分布式网络通信框架项目资料/mprpc项目代码/mprpc

Total : 77 files,  11662 codes, 1335 comments, 2183 blanks, all 15180 lines

[Summary](results.md) / Details / [Diff Summary](diff.md) / [Diff Details](diff-details.md)

## Files
| filename | language | code | comment | blank | total |
| :--- | :--- | ---: | ---: | ---: | ---: |
| [CMakeLists.txt](/CMakeLists.txt) | CMake | 18 | 0 | 4 | 22 |
| [README.md](/README.md) | Markdown | 0 | 0 | 1 | 1 |
| [autobuild.sh](/autobuild.sh) | Shell Script | 7 | 1 | 2 | 10 |
| [bin/test.conf](/bin/test.conf) | Properties | 4 | 4 | 1 | 9 |
| [build/CMakeCache.txt](/build/CMakeCache.txt) | CMake Cache | 273 | 0 | 61 | 334 |
| [build/CMakeFiles/3.10.2/CMakeCCompiler.cmake](/build/CMakeFiles/3.10.2/CMakeCCompiler.cmake) | CMake | 57 | 0 | 17 | 74 |
| [build/CMakeFiles/3.10.2/CMakeCXXCompiler.cmake](/build/CMakeFiles/3.10.2/CMakeCXXCompiler.cmake) | CMake | 59 | 0 | 17 | 76 |
| [build/CMakeFiles/3.10.2/CMakeSystem.cmake](/build/CMakeFiles/3.10.2/CMakeSystem.cmake) | CMake | 10 | 0 | 6 | 16 |
| [build/CMakeFiles/3.10.2/CompilerIdC/CMakeCCompilerId.c](/build/CMakeFiles/3.10.2/CompilerIdC/CMakeCCompilerId.c) | C | 449 | 51 | 99 | 599 |
| [build/CMakeFiles/3.10.2/CompilerIdCXX/CMakeCXXCompilerId.cpp](/build/CMakeFiles/3.10.2/CompilerIdCXX/CMakeCXXCompilerId.cpp) | C++ | 427 | 53 | 97 | 577 |
| [build/CMakeFiles/CMakeDirectoryInformation.cmake](/build/CMakeFiles/CMakeDirectoryInformation.cmake) | CMake | 12 | 0 | 5 | 17 |
| [build/CMakeFiles/CMakeOutput.log](/build/CMakeFiles/CMakeOutput.log) | Log | 572 | 0 | 62 | 634 |
| [build/CMakeFiles/Makefile.cmake](/build/CMakeFiles/Makefile.cmake) | CMake | 123 | 0 | 6 | 129 |
| [build/CMakeFiles/feature\_tests.c](/build/CMakeFiles/feature_tests.c) | C | 31 | 0 | 4 | 35 |
| [build/CMakeFiles/feature\_tests.cxx](/build/CMakeFiles/feature_tests.cxx) | C++ | 402 | 0 | 4 | 406 |
| [build/Makefile](/build/Makefile) | Makefile | 78 | 48 | 51 | 177 |
| [build/cmake\_install.cmake](/build/cmake_install.cmake) | CMake | 47 | 0 | 10 | 57 |
| [build/example/CMakeFiles/CMakeDirectoryInformation.cmake](/build/example/CMakeFiles/CMakeDirectoryInformation.cmake) | CMake | 12 | 0 | 5 | 17 |
| [build/example/Makefile](/build/example/Makefile) | Makefile | 57 | 36 | 42 | 135 |
| [build/example/callee/CMakeFiles/CMakeDirectoryInformation.cmake](/build/example/callee/CMakeFiles/CMakeDirectoryInformation.cmake) | CMake | 12 | 0 | 5 | 17 |
| [build/example/callee/CMakeFiles/provider.dir/DependInfo.cmake](/build/example/callee/CMakeFiles/provider.dir/DependInfo.cmake) | CMake | 21 | 0 | 4 | 25 |
| [build/example/callee/CMakeFiles/provider.dir/cmake\_clean.cmake](/build/example/callee/CMakeFiles/provider.dir/cmake_clean.cmake) | CMake | 10 | 0 | 2 | 12 |
| [build/example/callee/Makefile](/build/example/callee/Makefile) | Makefile | 102 | 45 | 64 | 211 |
| [build/example/callee/cmake\_install.cmake](/build/example/callee/cmake_install.cmake) | CMake | 33 | 0 | 7 | 40 |
| [build/example/caller/CMakeFiles/CMakeDirectoryInformation.cmake](/build/example/caller/CMakeFiles/CMakeDirectoryInformation.cmake) | CMake | 12 | 0 | 5 | 17 |
| [build/example/caller/CMakeFiles/consumer.dir/DependInfo.cmake](/build/example/caller/CMakeFiles/consumer.dir/DependInfo.cmake) | CMake | 21 | 0 | 4 | 25 |
| [build/example/caller/CMakeFiles/consumer.dir/cmake\_clean.cmake](/build/example/caller/CMakeFiles/consumer.dir/cmake_clean.cmake) | CMake | 10 | 0 | 2 | 12 |
| [build/example/caller/Makefile](/build/example/caller/Makefile) | Makefile | 102 | 45 | 64 | 211 |
| [build/example/caller/cmake\_install.cmake](/build/example/caller/cmake_install.cmake) | CMake | 33 | 0 | 7 | 40 |
| [build/example/cmake\_install.cmake](/build/example/cmake_install.cmake) | CMake | 38 | 0 | 9 | 47 |
| [build/src/CMakeFiles/CMakeDirectoryInformation.cmake](/build/src/CMakeFiles/CMakeDirectoryInformation.cmake) | CMake | 12 | 0 | 5 | 17 |
| [build/src/CMakeFiles/mprpc.dir/DependInfo.cmake](/build/src/CMakeFiles/mprpc.dir/DependInfo.cmake) | CMake | 26 | 0 | 4 | 30 |
| [build/src/CMakeFiles/mprpc.dir/cmake\_clean.cmake](/build/src/CMakeFiles/mprpc.dir/cmake_clean.cmake) | CMake | 16 | 0 | 2 | 18 |
| [build/src/CMakeFiles/mprpc.dir/cmake\_clean\_target.cmake](/build/src/CMakeFiles/mprpc.dir/cmake_clean_target.cmake) | CMake | 3 | 0 | 1 | 4 |
| [build/src/Makefile](/build/src/Makefile) | Makefile | 210 | 63 | 118 | 391 |
| [build/src/cmake\_install.cmake](/build/src/cmake_install.cmake) | CMake | 33 | 0 | 7 | 40 |
| [example/CMakeLists.txt](/example/CMakeLists.txt) | CMake | 2 | 0 | 0 | 2 |
| [example/callee/CMakeLists.txt](/example/callee/CMakeLists.txt) | CMake | 4 | 0 | 1 | 5 |
| [example/callee/friendservice.cc](/example/callee/friendservice.cc) | C++ | 46 | 4 | 7 | 57 |
| [example/callee/userservice.cc](/example/callee/userservice.cc) | C++ | 57 | 15 | 14 | 86 |
| [example/caller/CMakeLists.txt](/example/caller/CMakeLists.txt) | CMake | 4 | 0 | 0 | 4 |
| [example/caller/callfriendservice.cc](/example/caller/callfriendservice.cc) | C++ | 34 | 6 | 4 | 44 |
| [example/caller/calluserservice.cc](/example/caller/calluserservice.cc) | C++ | 37 | 9 | 7 | 53 |
| [example/friend.pb.cc](/example/friend.pb.cc) | C++ | 703 | 70 | 115 | 888 |
| [example/friend.pb.h](/example/friend.pb.h) | C++ | 655 | 73 | 110 | 838 |
| [example/user.pb.cc](/example/user.pb.cc) | C++ | 1,198 | 120 | 188 | 1,506 |
| [example/user.pb.h](/example/user.pb.h) | C++ | 1,123 | 128 | 200 | 1,451 |
| [lib/include/lockqueue.h](/lib/include/lockqueue.h) | C++ | 31 | 4 | 3 | 38 |
| [lib/include/logger.h](/lib/include/logger.h) | C++ | 39 | 6 | 5 | 50 |
| [lib/include/mprpcapplication.h](/lib/include/mprpcapplication.h) | C++ | 16 | 1 | 3 | 20 |
| [lib/include/mprpcchannel.h](/lib/include/mprpcchannel.h) | C++ | 13 | 1 | 2 | 16 |
| [lib/include/mprpcconfig.h](/lib/include/mprpcconfig.h) | C++ | 12 | 5 | 2 | 19 |
| [lib/include/mprpccontroller.h](/lib/include/mprpccontroller.h) | C++ | 18 | 1 | 2 | 21 |
| [lib/include/rpcheader.pb.h](/lib/include/rpcheader.pb.h) | C++ | 301 | 38 | 55 | 394 |
| [lib/include/rpcprovider.h](/lib/include/rpcprovider.h) | C++ | 27 | 9 | 5 | 41 |
| [lib/include/zookeeperutil.h](/lib/include/zookeeperutil.h) | C++ | 15 | 5 | 2 | 22 |
| [src/CMakeLists.txt](/src/CMakeLists.txt) | CMake | 12 | 0 | 0 | 12 |
| [src/include/lockqueue.h](/src/include/lockqueue.h) | C++ | 31 | 4 | 3 | 38 |
| [src/include/logger.h](/src/include/logger.h) | C++ | 39 | 6 | 5 | 50 |
| [src/include/mprpcapplication.h](/src/include/mprpcapplication.h) | C++ | 16 | 1 | 3 | 20 |
| [src/include/mprpcchannel.h](/src/include/mprpcchannel.h) | C++ | 13 | 1 | 2 | 16 |
| [src/include/mprpcconfig.h](/src/include/mprpcconfig.h) | C++ | 12 | 5 | 2 | 19 |
| [src/include/mprpccontroller.h](/src/include/mprpccontroller.h) | C++ | 18 | 1 | 2 | 21 |
| [src/include/rpcheader.pb.h](/src/include/rpcheader.pb.h) | C++ | 301 | 38 | 55 | 394 |
| [src/include/rpcprovider.h](/src/include/rpcprovider.h) | C++ | 27 | 9 | 5 | 41 |
| [src/include/zookeeperutil.h](/src/include/zookeeperutil.h) | C++ | 15 | 5 | 2 | 22 |
| [src/logger.cc](/src/logger.cc) | C++ | 46 | 6 | 9 | 61 |
| [src/mprpcapplication.cc](/src/mprpcapplication.cc) | C++ | 46 | 5 | 8 | 59 |
| [src/mprpcchannel.cc](/src/mprpcchannel.cc) | C++ | 123 | 21 | 14 | 158 |
| [src/mprpcconfig.cc](/src/mprpcconfig.cc) | C++ | 59 | 12 | 10 | 81 |
| [src/mprpccontroller.cc](/src/mprpccontroller.cc) | C++ | 27 | 1 | 6 | 34 |
| [src/rpcheader.pb.cc](/src/rpcheader.pb.cc) | C++ | 270 | 31 | 46 | 347 |
| [src/rpcprovider.cc](/src/rpcprovider.cc) | C++ | 130 | 53 | 25 | 208 |
| [src/zookeeperutil.cc](/src/zookeeperutil.cc) | C++ | 80 | 12 | 9 | 101 |
| [test/protobuf/main.cc](/test/protobuf/main.cc) | C++ | 38 | 7 | 10 | 55 |
| [test/protobuf/test.pb.cc](/test/protobuf/test.pb.cc) | C++ | 1,393 | 139 | 218 | 1,750 |
| [test/protobuf/test.pb.h](/test/protobuf/test.pb.h) | C++ | 1,299 | 137 | 220 | 1,656 |

[Summary](results.md) / Details / [Diff Summary](diff.md) / [Diff Details](diff-details.md)