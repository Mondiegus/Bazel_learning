#include <01.h>
#include <iostream>

void Citizen::printSurnameAndAddress()
{
    std::cout << "Surname: " << getSurname() << ", address: " << getAddress() << std::endl;
}