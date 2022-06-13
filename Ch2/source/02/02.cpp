#include <02.h>

using namespace std;

MilesToMetersConverter::MilesToMetersConverter()
{
    cout << "Please provide distance in miles" << endl;
    cin >> miles;
}

double MilesToMetersConverter::getValueInMeters()
{
    return miles*1852;
}