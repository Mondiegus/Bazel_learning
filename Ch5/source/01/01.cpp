#include <01.h>
#include <iostream>
#include <vector>

using namespace std;

CalculateSumOfNumbers::CalculateSumOfNumbers()
{
    cout << "Provide first integer number: ";
    cin >> num1;
    cout << "Provide second integer number: ";
    cin >> num2;
}

int CalculateSumOfNumbers::calcSum()
{
    int sum = 0;
    for(int i = num1; i <= num2; i++)
        sum+=i;
    return sum;
}
