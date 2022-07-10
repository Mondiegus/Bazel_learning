#include <stdio.h>
#include <01.h>
#include <06.h>
#include <10.h>

using namespace std;

void t01()
{
    CalculateSumOfNumbers calculateSumOfNumbers;
    cout << "Result of adding is: " << calculateSumOfNumbers.calcSum() << endl;
}

void t06()
{
    SoldBooks soldBooks;
    cout << "In last 3 years we have sold " << soldBooks.numberOfSoldBooks() << " books" << endl;
}

void t10()
{
    PrintTree printTree;
}

int main()
{
    t01();
    t06();
    t10();
    return 0;
}