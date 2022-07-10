#include <stdio.h>
#include <01.h>
#include <06.h>
#include <10.h>

using namespace std;

void t01()
{
    ReadChars readChars;
    cout << "Result of this table is: ";
    readChars.printLetters(); 
}

void t06()
{
    CharityAccount charityAccount;
    cout << "The users are: " << endl;
    charityAccount.printUsers();
}


void t10()
{
    PrintTree printTree;
}

int main()
{
    t01();
    t06();
    // t10();
    return 0;
}