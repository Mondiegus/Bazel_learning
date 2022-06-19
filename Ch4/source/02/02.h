#pragma once
#include <string>

using namespace std;

class StudentCpp
{
public:
    StudentCpp(char *_names, char *_surname, int _proposedDegree, int _age);
    StudentCpp(string _names, string _surname, int _proposedDegree, int _age);
    StudentCpp();
    void setNamesByUser(char *_names);
    void setSurnameByUser(char *_surname);
    void setNamesByUser(string *_names);
    void setSurnameByUser(string *_surname);

    void setAgeByUser(int *_age);
    void setDegreeByUser(int *_proposedDegree);

    string getName() { return names; };
    string getSurname() { return surname; };
    int getAge() { return age; };
    int getDegree() { return proposedDegree; };
    void printData();
    ~StudentCpp(){};

private:
    string names = "";
    string surname = "";
    int proposedDegree = 0;
    int age = 0;
    const int lowerDegree = 1;
};