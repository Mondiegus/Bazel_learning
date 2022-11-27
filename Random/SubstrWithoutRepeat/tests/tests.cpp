#include <gtest/gtest.h>
#include <substrWithoutRepeat.h>


TEST(StrLen, assert_true)
{
    ASSERT_EQ(2, 2);
}

TEST(StrLen, assert_false)
{
    ASSERT_NE(2, 3);
}

TEST(StrLen, StrLen_00)
{
    Solution solution;
    int ret = solution.lengthOfLongestSubstring("abcabc bb");;
    ASSERT_EQ(ret, 4);
}

