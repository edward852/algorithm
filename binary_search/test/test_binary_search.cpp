#include "gtest/gtest.h"
#include "binary_search.h"

TEST(BinarySearch, Empty)
{
    EXPECT_EQ(binary_search({}, 0), -1);
    EXPECT_EQ(left_bound({}, 0), -1);
    EXPECT_EQ(right_bound({}, 0), -1);
}

TEST(BinarySearch, OneExist)
{
    EXPECT_EQ(binary_search({1}, 1), 0);
    EXPECT_EQ(left_bound({1}, 1), 0);
    EXPECT_EQ(right_bound({1}, 1), 0);
}

TEST(BinarySearch, OneAllGreater)
{
    EXPECT_EQ(binary_search({1}, 0), -1);
    EXPECT_EQ(left_bound({1}, 0), -1);
    EXPECT_EQ(right_bound({1}, 0), -1);
}

TEST(BinarySearch, OneAllLesser)
{
    EXPECT_EQ(binary_search({1}, 2), -1);
    EXPECT_EQ(left_bound({1}, 2), -1);
    EXPECT_EQ(right_bound({1}, 2), -1);
}

TEST(BinarySearch, TwoExist)
{
    EXPECT_EQ(binary_search({1,1}, 1), 0);
    EXPECT_EQ(left_bound({1,1}, 1), 0);
    EXPECT_EQ(right_bound({1,1}, 1), 1);
}

TEST(BinarySearch, TwoAllGreater)
{
    EXPECT_EQ(binary_search({1,2}, 0), -1);
    EXPECT_EQ(left_bound({1,2}, 0), -1);
    EXPECT_EQ(right_bound({1,2}, 0), -1);
}

TEST(BinarySearch, TwoAllLesser)
{
    EXPECT_EQ(binary_search({1,2}, 3), -1);
    EXPECT_EQ(left_bound({1,2}, 3), -1);
    EXPECT_EQ(right_bound({1,2}, 3), -1);
}

TEST(BinarySearch, ThreeExist)
{
    EXPECT_EQ(binary_search({1,1,1}, 1), 1);
    EXPECT_EQ(left_bound({1,1,1}, 1), 0);
    EXPECT_EQ(right_bound({1,1,1}, 1), 2);
}

TEST(BinarySearch, ThreeExistOne)
{
    EXPECT_EQ(binary_search({0,1,2}, 1), 1);
    EXPECT_EQ(left_bound({0,1,2}, 1), 1);
    EXPECT_EQ(right_bound({0,1,2}, 1), 1);
}

TEST(BinarySearch, ThreeAllGreater)
{
    EXPECT_EQ(binary_search({1,2,3}, 0), -1);
    EXPECT_EQ(left_bound({1,2,3}, 0), -1);
    EXPECT_EQ(right_bound({1,2,3}, 0), -1);
}

TEST(BinarySearch, ThreeAllLesser)
{
    EXPECT_EQ(binary_search({1,2,3}, 4), -1);
    EXPECT_EQ(left_bound({1,2,3}, 4), -1);
    EXPECT_EQ(right_bound({1,2,3}, 4), -1);
}
