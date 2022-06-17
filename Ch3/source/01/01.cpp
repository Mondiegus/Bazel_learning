#include <01.h>
#include <iostream>

using namespace std;

void HeightConverter::calcHeight()
{
     heightInc = heightCm * 10 / InchToMm;
    heightFoots = heightInc / footToInches;
}
void HeightConverter::printHeight()
{
    calcHeight();
    cout << "Height in cm: " << heightCm << ", inches " << heightInc << ", foots: " << heightFoots << endl;
}

HeightConverter::HeightConverter()
{
    cout << "Provide height in cm: ";
    cin >> heightCm;
}