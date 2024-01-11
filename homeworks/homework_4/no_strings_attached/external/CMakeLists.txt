add_subdirectory(googletest)
if (BUILD_TESTING)

    set(TEST_SOURCE_FILES
        string_split_test.cpp
        string_trim_test.cpp
    )

    add_executable(my_tests ${TEST_SOURCE_FILES})
    target_link_libraries(my_tests PRIVATE string_split string_trim GTest::gtest_main)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(my_tests)
endif()