#include <gtest/gtest.h>
#include <04.h>

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
    Port prt;
    ASSERT_EQ(strcmp(prt.GetBrand(), "brak"), 0);
    ASSERT_EQ(prt.BootleCount(), 0);
    ASSERT_EQ(strcmp(prt.GetStyle(), "brak"), 0);
}

TEST(ch08, t02_passed)
{

    Port prt("test", "test2", 5);
    ASSERT_EQ(strcmp(prt.GetBrand(), "test"), 0);
    ASSERT_EQ(prt.BootleCount(), 5);
    ASSERT_EQ(strcmp(prt.GetStyle(), "test2"), 0);
}

TEST(ch08, t03_passed)
{
    VintagePort vp;
    ASSERT_EQ(strcmp(vp.GetBrand(), "brak"), 0);
    ASSERT_EQ(vp.BootleCount(), 0);
    ASSERT_EQ(vp.GetYear(), 0);
    ASSERT_EQ(vp.GetNickname(), (nullptr));
    ASSERT_EQ(strcmp(vp.GetStyle(), "brak"), 0);
}

TEST(ch08, t04_passed)
{
    VintagePort vp("test", 5, "banan", 3);
    ASSERT_EQ(strcmp(vp.GetBrand(), "test"), 0);
    ASSERT_EQ(vp.BootleCount(), 5);
    ASSERT_EQ(vp.GetYear(), 3);
    ASSERT_EQ(strcmp(vp.GetNickname(), "banan"), 0);
    ASSERT_EQ(strcmp(vp.GetStyle(), "brak"), 0);
}
