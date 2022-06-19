#include <02.h>
#include <iostream>
#include <string.h>

using namespace std;

StudentCpp::StudentCpp(char *_names, char *_surname, int _proposedDegree, int _age) : proposedDegree(_proposedDegree), age(_age)
{
    names = _names;
    surname = _surname;
}

StudentCpp::StudentCpp()
{
    cout << "What is your name? ";
    setNamesByUser(&names);
    cout << "What is your surname? ";
    setSurnameByUser(&surname);
    cout << "How old are You? ";
    setAgeByUser(&age);

    do  
    {
        if (proposedDegree == 0)
        {
            cout << "What degree do you want? ";
            setDegreeByUser(&proposedDegree);
        }
        else
        {
            cout << "Degree need to be higher than 1 and lower than 6. What degree do you want? ";
            setDegreeByUser(&proposedDegree);
        }

    } while (!(proposedDegree > 1 || proposedDegree <= 6));
}

void StudentCpp::setNamesByUser(string *_names)
{
    getline(cin, *_names);
}

void StudentCpp::setSurnameByUser(string *_surname)
{
    getline(cin, *_surname);
}

void StudentCpp::setAgeByUser(int *_age)
{
    cin >> (*_age);
}

void StudentCpp::setDegreeByUser(int *_proposedDegree)
{
    cin >> (*_proposedDegree);
}

void StudentCpp::printData()
{
    cout << "Surname: " << surname << ", " << names << endl;
    cout << "Degree: " << (proposedDegree - lowerDegree) << endl;
    cout << "Age: " << age << endl;
}
