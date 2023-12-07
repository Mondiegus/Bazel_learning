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

// TEST(ch4, t01_failed)
// {
//     CalculateSumOfNumbers calculateSumOfNumbers(5, 2);
//     ASSERT_EQ(calculateSumOfNumbers.getFirstNum(), 5);
//     ASSERT_EQ(calculateSumOfNumbers.getSecNum(), 2);
//     ASSERT_NE(calculateSumOfNumbers.calcSum(), 44);
// }

// TEST(ch4, t06_passed)
// {
//     int _books[3][12];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {
//             _books[i][j] = 1;
//         }
//     }

//     SoldBooks soldBooks(_books, 3);
//     ASSERT_EQ(soldBooks.numberOfSoldBooks(), 36);
// }

// TEST(ch4, t06_failed)
// {
//     int _books[3][12];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {
//             _books[i][j] = 1;
//         }
//     }

//     SoldBooks soldBooks(_books, 3);
//     ASSERT_NE(soldBooks.numberOfSoldBooks(), -5);
// }
