project(yobadb)
cmake_minimum_required(VERSION 3.16)

find_package(Boost 1.56 REQUIRED COMPONENTS system)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(yobadb src/main.cpp)

target_link_libraries(yobadb PRIVATE Threads::Threads ${Boost_LIBRARIES})
target_include_directories(yobadb PRIVATE ${Boost_INCLUDE_DIRS})