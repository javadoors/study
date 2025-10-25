#include <gtest/gtest.h>
#include "mylib.hpp"

TEST(AddFunction, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddFunction, NegativeNumbers) {
    EXPECT_EQ(add(-1, -2), -3);
}

TEST(AddFunction, MixedNumbers) {
    EXPECT_EQ(add(-1, 1), 0);
}
