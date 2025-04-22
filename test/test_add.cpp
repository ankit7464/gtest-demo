#include <gtest/gtest.h>

// Function to test
int add(int a, int b) {
    return a + b;
}

// Unit tests
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(AddTest, MixedNumbers) {
    EXPECT_EQ(add(-2, 2), 0);
}
