#include <gtest/gtest.h>
#include <01.h>
#include <06.h>
#include <10.h>

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
    vector<int> tab = {'a', 'b', 'c', 'd'};
    ReadChars readChars(tab);
    ASSERT_EQ(readChars.getTab(), tab);
    ASSERT_EQ(readChars.getSize(), tab.size());
}

TEST(ch4, t01_failed)
{
    vector<int> tab = {'a', 'b', 'c', 'd', '@', '!', '%'};
    ReadChars readChars(tab);
    ASSERT_EQ(readChars.getTab(), tab);
    tab.push_back('l');
    ASSERT_NE(readChars.getSize(), tab.size());
}

TEST(ch4, t06_passed)
{
    struct Users tab[] = 
    {
        {"aa", 12345},
        {"bb", 1},
        {"cc", 9999.99},
    };

    CharityAccount charityAccount(tab, 3);

    ASSERT_EQ(charityAccount.numberOfCharityAccount(), 3);
    ASSERT_TRUE(charityAccount.isSuperUser(0));
    ASSERT_EQ(charityAccount.getUserMoney(0), 12345);
}

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
