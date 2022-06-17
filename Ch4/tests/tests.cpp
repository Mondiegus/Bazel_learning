#include <gtest/gtest.h>
#include <01.h>
#include <02.h>
#include <03.h>

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

// TEST(ch4, t01_failed)
// {
//     HeightConverter heightConverter(5);
//     heightConverter.calcHeight();
//     ASSERT_NE(heightConverter.getHeightInCm(), 100);
//     ASSERT_NE(heightConverter.getHeightInInc(), 39.3701);
//     ASSERT_NE(heightConverter.getHeightInFoots(), 39.3701);
// }

// TEST(ch2, t02_passed)
// {
//     BmiCalc bmiCalc(165.346697, 5, 10.87);
//     bmiCalc.calcWeight();
//     bmiCalc.calcHeight();
//     bmiCalc.calcBmi();
//     ASSERT_NEAR(bmiCalc.getKg(), 75, 0.2);
//     ASSERT_NEAR(bmiCalc.getMeters(), 1.8, 0.01);
//     ASSERT_NEAR(bmiCalc.getBmi(), 23, 0.2);
// }

// TEST(ch2, t02_passed_00)
// {
//     MilesToMetersConverter converter(1.f);
//     double value = converter.getValueInMeters();
//     ASSERT_EQ(value, 1852);
// }

// TEST(ch2, t02_passed_01)
// {
//     MilesToMetersConverter converter(0.1f);
//     double value = converter.getValueInMeters();
//     ASSERT_EQ(float(value), float(185.2)); // gtest have problems with double
// }

// TEST(ch2, t02_failed)
// {
//     MilesToMetersConverter converter(0.1);
//     int value = converter.getValueInMeters();
//     ASSERT_NE(value, 185.2);
// }

// TEST(ch2, t03_passed)
// {
//     Poem poem;
//     ASSERT_EQ(poem.getFirstLine(), "Entliczek petliczek");
//     ASSERT_EQ(poem.getSecondLine(), "Czerwony stoliczek");
// }
