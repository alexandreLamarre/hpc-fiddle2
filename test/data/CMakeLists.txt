enable_testing()

add_executable(
  data_test
  data.test.cpp
)
target_link_libraries(
  data_test
  gtest_main
)

target_link_libraries(
    data_test
    ${DATA_LIBRARY_NAME}
)

include(GoogleTest)
gtest_discover_tests(data_test)