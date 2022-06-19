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

Cookieeeees::Cookieeeees(Batonik *_batoniki)
{
    batoniki[0].name = _batoniki[0].name;
    batoniki[0].weight = _batoniki[0].weight;
    batoniki[0].calories = _batoniki[0].calories;
    batoniki[1].name = _batoniki[1].name;
    batoniki[1].weight = _batoniki[1].weight;
    batoniki[1].calories = _batoniki[1].calories;
    batoniki[2].name = _batoniki[2].name;
    batoniki[2].weight = _batoniki[2].weight;
    batoniki[2].calories = _batoniki[2].calories;
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
