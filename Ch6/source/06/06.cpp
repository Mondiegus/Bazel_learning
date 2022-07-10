#include <06.h>

SoldBooks::SoldBooks()
{
    for (int i = 0; i < NumberOfYears; i++)
    {
        for (int j = 0; j < NumberOfMonths; j++)
        {
            cout << "Put number of sold books in " << i+1 << ". year in " << months[j] << ": " << endl;
            cin >> soldBooks[i][j];
        }
    }

}

SoldBooks::SoldBooks(int _soldBooks[][12], int years)
{
    for (int i = 0; i < NumberOfYears; i++)
    {
        for (int j = 0; j < NumberOfMonths; j++)
        {
            soldBooks[i][j] = _soldBooks[i][j];
        }
    }
}

int SoldBooks::numberOfSoldBooks()
{
    int sum = 0;
    for (int i = 0; i < NumberOfYears; i++)
    {
        for (int j = 0; j < NumberOfMonths; j++)
        {
            sum += soldBooks[i][j];
        }
    }
    return sum;
}
