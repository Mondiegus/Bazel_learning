#include <06.h>

Cookieeeees::Cookieeeees()
{
    batoniki[0].name = "mars";
    batoniki[0].weight = 32.5;
    batoniki[0].calories = 480;
    batoniki[1].name = "munch munch";
    batoniki[1].weight = 2.3;
    batoniki[1].calories = 350;
    batoniki[2].name = "snickers";
    batoniki[2].weight = 42.5;
    batoniki[2].calories = 380;
}

void Cookieeeees::printCookieeeees()
{
    for (size_t i = 0; i < cookiesNumb; i++)
    {
        cout << "name: " << batoniki[i].name << endl; 
        cout << "weight: " << batoniki[i].weight << endl; 
        cout << "calories: " << batoniki[i].calories << endl; 
    }
}