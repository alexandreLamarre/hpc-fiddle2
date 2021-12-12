add_library(${DATA_LIBRARY_NAME} 
            data.cpp)
target_include_directories(${DATA_LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})