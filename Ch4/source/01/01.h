#pragma once
#include <string>

using namespace std;

class Student
{
public:
    Student(char *_names, char *_surname, int _proposedDegree, int _age);
    Student();
    void setNamesByUser(char *_names);
    void setSurnameByUser(char *_surname);
    void setAgeByUser(int *_age);
    void setDegreeByUser(int *_proposedDegree);

    char *getName() { return names; };
    char *getSurname() { return surname; };
    int getAge() { return age; };
    int getDegree() { return proposedDegree; };
    void printData();
    ~Student()
    {
        delete names;
        delete surname;
    };

private:
    char *names = new char[80];
    char *surname = new char[80];
    int proposedDegree = 0;
    int age = 0;
    const int lowerDegree = 1;
};