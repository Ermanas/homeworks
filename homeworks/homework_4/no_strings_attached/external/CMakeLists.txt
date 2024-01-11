add_subdirectory(googletest)
if (BUILD_TESTING)
    add_executable(string_split_test string_split_test.cpp)
    target_link_libraries(string_split_test PRIVATE string_split GTest::gtest_main)
    
    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(string_split_test)
endif()