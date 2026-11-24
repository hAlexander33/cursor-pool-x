cmake_minimum_required(VERSION 3.16)
project(cursor-pool-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cursorpoolx
    src/main.cpp
    src/pool.cpp
    src/quota.cpp
)

target_include_directories(cursorpoolx PRIVATE include)

if(WIN32)
    target_link_libraries(cursorpoolx PRIVATE userenv)
endif()
