cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(BookShop VERSION 1.0)


file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(BookShop Test_Mini_P.cpp ${SRC_FILES})

target_include_directories(BookShop PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)