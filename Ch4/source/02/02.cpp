#include <02.h>

using namespace std;

BmiCalc::BmiCalc()
{
    cout << "Please provide weight in pounds: " << endl;
    cin >> pounds;
    cout << "Please provide height in foot and inches: " << endl;
    cin >> foot;
    cin >> inches;
}

void BmiCalc::calcWeight()
{
    kg = pounds / poundsToKg;
}

void BmiCalc::calcHeight()
{
    inches = inches + (foot * footToInches);
    meters = inches * inchesToMeters;
}

void BmiCalc::calcBmi()
{
    bmi = kg / (meters * meters);
}

void BmiCalc::printBmi()
{
    cout << "BMI is: " << bmi << endl;
}