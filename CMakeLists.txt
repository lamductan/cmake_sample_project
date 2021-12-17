# CMakeLists.txt for SampleProject

cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 14)

project(SampleProject)

set(This sample-project)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

set(HEADERS
    include/sample-project/utils.h
)

set(SOURCES
    src/utils.cpp
)

add_library(${This} STATIC ${SOURCES} ${HEADERS})
target_include_directories(${This} PUBLIC include)
target_link_libraries(${This} PRIVATE Threads::Threads)

add_executable(prog src/main.cpp ${SOURCES} ${HEADERS})
target_include_directories(prog PUBLIC include)
target_link_libraries(prog PRIVATE Threads::Threads)

add_subdirectory(third_party)
add_subdirectory(test)
