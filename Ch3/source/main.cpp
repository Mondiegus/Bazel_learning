#include <stdio.h>
#include <01.h>
#include <02.h>
#include <03.h>
#include <04.h>
#include <05.h>
#include <06.h>

using namespace std;

void t01()
{
    HeightConverter heightConverter;
    heightConverter.printHeight();
}

void t02()
{
    BmiCalc bmiCalc;
    bmiCalc.calcWeight();
    bmiCalc.calcHeight();
    bmiCalc.calcBmi();
    bmiCalc.printBmi();
}

int main()
{
    t01();
    t02();

    return 0;
}