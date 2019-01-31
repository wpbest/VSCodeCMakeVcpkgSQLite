# VSCodeCMakeVcpkgSQLite
VSCode using CMake, Vcpkg, and SQLite

## Build Setup

```
mkdir build
cd build
cmake .. "-DCMAKE_TOOLCHAIN_FILE=/Users/william.best/vcpkg/scripts/buildsystems/vcpkg.cmake"
-- The C compiler identification is AppleClang 10.0.0.10001145
-- The CXX compiler identification is AppleClang 10.0.0.10001145
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - found
-- Found Threads: TRUE
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/william.best/Documents/GitHub/VSCodeCMakeVcpkgSQLite/build
```

# Build

```
cmake --build .
Scanning dependencies of target main.out
[ 50%] Building CXX object CMakeFiles/main.out.dir/main.cpp.o
[100%] Linking CXX executable main.out
[100%] Built target main.out
```

# Run

```
./main.out
SQLite version: 3.26.0
```
