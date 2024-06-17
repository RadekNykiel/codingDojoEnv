#include <vector>
#include "Snail.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using M = std::vector<std::vector<int>>;
using V = std::vector<int>;
TEST(SnailTest, empty_return_empty) {
    M input = {};
    V output = {};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}
TEST(SnailTest, single_el_one) {
    M input = {{1}};
    V output = {1};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}
TEST(SnailTest, single_row) {
    M input = {{1,2,3}};
    V output = {1,2,3};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}

TEST(SnailTest, column) {
    M input = {{5},{6},{7}};
    V output = {5,6,7};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}
TEST(SnailTest, two_rows) {
    M input = {{1,2,3},{4,5,6}};
    V output = {1,2,3,6,5,4};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}

TEST(SnailTest, one_loop) {
    M input = {{1,2}, 
                {6,3},
                {5,4}};
    V output = {1,2,3,4,5,6};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}

TEST(SnailTest, second_loop) {
    M input = {{1,2,3}, 
                {4,5,6},
                {7,8,9}};
    V output = {1,2,3,6,9,8,7,4,5};
    Snail s = Snail {};
    EXPECT_EQ(s.snail(input),output);
}
