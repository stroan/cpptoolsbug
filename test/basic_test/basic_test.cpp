#include <gtest/gtest.h>

#include <demolib.h>

TEST(BasicTest, AddsOne) {
    ASSERT_EQ(1, basic(0));
}

TEST(BasicTest, OnlyAddsOne) {
    ASSERT_GT(2, basic(0));
}