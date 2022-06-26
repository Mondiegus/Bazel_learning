#pragma once
#include <string>

using namespace std;

class CalculateSumOfNumbers
{
public:
    CalculateSumOfNumbers(int _num1, int _num2) : num1(_num1), num2(_num2){};
    CalculateSumOfNumbers();
    int getFirstNum() {return num1;};
    int getSecNum() {return num2;};
    int calcSum();
    ~CalculateSumOfNumbers(){};

private:
    int num1 = 0;
    int num2 = 0;
};