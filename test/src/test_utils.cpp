#include <iostream>
#include <string>
#include <gtest/gtest.h>

#include "sample-project/utils.h"

TEST(TestUtils, TestIntToStr) {
    int x = 123;
    std::string expected_str = "123";
    std::string output_str = intToStr(x);
    EXPECT_EQ(output_str, expected_str);
}

