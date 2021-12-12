cmake_minimum_required(VERSION 3.20)
project(HPC)
set(CMAKE_CXX_COMPILER_ID GNU)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# define library names
set(DATA_LIBRARY_NAME DATA)

add_subdirectory(src)

add_executable(HPC main.cpp)

target_link_libraries(HPC PUBLIC ${DATA_LIBRARY_NAME})
# target_include_directories(${PROJECT_NAME} PUBLIC
#                             "${PROJECT_BINARY_DIR}"
#                             "${PROJECT_SOURCE_DIR}/src/automata"
# )
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/3b49be074d5c1340eeb447e6a8e78427051e675a.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
target_link_libraries(${PROJECT_NAME} LINK_PUBLIC gtest_main gtest)

add_subdirectory(test)