add_executable(test_add_lib test_add_lib.cpp)
target_link_libraries(test_add_lib PRIVATE add Catch2::Catch2WithMain)
#target_link_libraries(test_add_lib PRIVATE add Catch2::Catch2WithMain)
catch_discover_tests(test_add_lib)

