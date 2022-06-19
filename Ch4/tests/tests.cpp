#include <gtest/gtest.h>
#include <01.h>
#include <02.h>
#include <06.h>

TEST(ch4, assert_true)
{
    ASSERT_EQ(2, 2);
}

TEST(ch4, assert_false)
{
    ASSERT_NE(2, 3);
}

TEST(ch4, t01_passed)
{
    Student student("Anna, Karenina", "Bubek", 5, 23);
    ASSERT_EQ(strcmp(student.getName(), "Anna, Karenina"), 0);
    EXPECT_STREQ(student.getSurname(), "Bubek");
    ASSERT_EQ(student.getAge(), 23);
    ASSERT_EQ(student.getDegree(), 5);
}

TEST(ch4, t01_failed)
{
    Student student("Anna, Karenina", "Bubek", -3, 23);
    EXPECT_STRNE(student.getName(), "Annna, Karenina");
    EXPECT_STREQ(student.getSurname(), "Bubek");
    ASSERT_EQ(student.getAge(), 23);
    ASSERT_NE(student.getDegree(), 5);
}

TEST(ch4, t02_passed)
{
    StudentCpp student("Anna, Karenina", "Bubek", 5, 23);
    ASSERT_EQ(student.getName(), "Anna, Karenina");
    ASSERT_EQ(student.getSurname(), "Bubek");
    ASSERT_EQ(student.getAge(), 23);
    ASSERT_EQ(student.getDegree(), 5);
}

TEST(ch4, t02_failed)
{
    StudentCpp student("Anna, Karenina", "Bubek", -3, 23);
    EXPECT_NE(student.getName(), "Annna, Karenina");
    EXPECT_EQ(student.getSurname(), "Bubek");
    ASSERT_EQ(student.getAge(), 23);
    ASSERT_NE(student.getDegree(), 5);
}

TEST(ch4, t06_passed)
{
    Batonik batoniki[3] = {
            {"mars", 32.5, 480},
            {"munch munch", 2.3, 350},
            {"snickers", 42.5, 380},
    };
    Cookieeeees cookieeeees(batoniki);

    ASSERT_EQ(cookieeeees.getStruct()[0].name, "mars");
}

TEST(ch4, t06_failed)
{
    Batonik batoniki[3] = {
            {"mars", 32.5, 480},
            {"munch munch", 2.3, 350},
            {"snickers", 42.5, 380},
    };
    Cookieeeees cookieeeees(batoniki);

    ASSERT_EQ(cookieeeees.getStruct()[0].name, "mars");
    ASSERT_NE(cookieeeees.getStruct()[0].weight, 2);
}
