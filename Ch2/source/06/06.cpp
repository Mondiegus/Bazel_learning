#include <06.h>

CustomClock::CustomClock()
{
    cout << "Provide hours: ";
    cin >> hours;
    cout << "Provide minutes: ";
    cin >> minutes;
}

void CustomClock::printTime()
{
    cout << "Time: " << hours << ":" << minutes << endl;
}
