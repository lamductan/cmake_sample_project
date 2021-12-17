set(TESTS
    "src/test_utils.cpp"
)

add_executable(tests ${TESTS})
set_target_properties(${This} PROPERTIES
    FOLDER Tests
)

target_link_libraries(tests gtest_main sample-project)

add_test(
    NAME ${This}
    COMMAND ${This}
)
