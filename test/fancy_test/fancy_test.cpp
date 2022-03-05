#include <gtest/gtest.h>

#include <demolib.h>

TEST(FancyTest, AddsTwo) {
    ASSERT_EQ(2, fancy(0));
}

TEST(FancyTest, OnlyAddsTwo) {
    ASSERT_GT(3, fancy(0));
}