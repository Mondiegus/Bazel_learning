#include <01.h>
#include <iostream>
#include <string.h>

using namespace std;

Student::Student(char *_names, char *_surname, int _proposedDegree, int _age) : proposedDegree(_proposedDegree), age(_age)
{
    strcpy(names, _names);
    strcpy(surname, _surname);
}

Student::Student()
{
    cout << "What is your name? ";
    setNamesByUser(names);
    cout << "What is your surname? ";
    setSurnameByUser(surname);
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

void Student::setNamesByUser(char *_names)
{
    cin.getline(_names, 80);
}

void Student::setSurnameByUser(char *_surname)
{
    cin.getline(_surname, 80);
}

void Student::setAgeByUser(int *_age)
{
    cin >> (*_age);
}

void Student::setDegreeByUser(int *_proposedDegree)
{
    cin >> (*_proposedDegree);
}

void Student::printData()
{
    cout << "Surname: " << surname << ", " << names << endl;
    cout << "Degree: " << (proposedDegree - lowerDegree) << endl;
    cout << "Age: " << age << endl;
}
