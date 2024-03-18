cmake_minimum_required(VERSION 3.11...3.28)

project(Chapter3-5)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
)


include(FetchContent)

FetchContent_Declare(
  plog
  GIT_REPOSITORY https://github.com/SergiusTheBest/plog.git
  GIT_TAG        1.1.10
)

FetchContent_MakeAvailable(plog)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE plog)
