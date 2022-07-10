#include <01.h>
#include <iostream>

using namespace std;

ReadChars::ReadChars()
{
    do
    {
        cout << "Put one letter: ";
        tab.push_back(getchar());
        cout << endl
             << "Size is: " << size << "read letter is: " << int(tab[size]) << endl;
        size++;
        getchar();
    } while (tab[size - 1] != '@');
}

void ReadChars::printLetters()
{
    for (int i = 0; i < size; i++)
    {
        if (int(tab[i]) < 48 || int(tab[i]) > 57)
        {
            if (int(tab[i]) > 64 && int(tab[i]) < 91)
            {
                cout << char(tab[i] + 32) << " ";
            }
            else if (int(tab[i]) > 96 && int(tab[i]) < 123)
            {
                cout << char(tab[i] - 32) << " ";
            }
        }
    }
}
