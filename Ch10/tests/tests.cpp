#include <gtest/gtest.h>
#include <08.h>

void MultiplyByTwo(int &el)
{
    el *= 2;
}

TEST(ch4, assert_true)
{
    ASSERT_EQ(2, 2);
}

TEST(ch4, assert_false)
{
    ASSERT_NE(2, 3);
}

TEST(ch08, t01_passed)
{
    ListObj lst(2);

    ASSERT_TRUE(lst.IsEmpty());
    ASSERT_FALSE(lst.IsFull());
}

TEST(ch08, t02_passed)
{
    ListObj lst(2);
    lst.Add(1);
    lst.Add(2);
    ASSERT_FALSE(lst.IsEmpty());
    ASSERT_TRUE(lst.IsFull());
}

TEST(ch08, t03_passed)
{
    ListObj lst(2);
    lst.Add(1);

    ASSERT_EQ(lst.GetNextEl()->GetVal(), 1);
    lst.Visit(MultiplyByTwo);
    ASSERT_EQ(lst.GetNextEl()->GetVal(), 2);
}
