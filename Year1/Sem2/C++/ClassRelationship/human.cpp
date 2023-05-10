#include <iostream>
#include <string>

#include "Person.h"
#include "Address.h"


Person::Person(std::string name)
{
    this -> _name = name;

    address = nullptr;
}

void Person::setAddress(Address adr)
{
    this -> address = &adr;
}

Address::Address(std::string street, int number, std::string city)
{
    this ->_street = street;

    this ->_number = number;

    this ->_city = city;
}

void Address::print()
{
    std::cout << this ->_street << ' ' << this ->_number 
              << ' ' << this->_city << '\n';
}

std::string Address::getCity()
{
    return this ->_city;
}

void Person::print()
{
    if(this->address != nullptr)
    {
        std::cout << this -> _name << " lives in " << this -> address->getCity() << '\n';
    }
    else
    {
        std::cout << this -> _name << " has unknown address" << '\n';
    }
}

int main()
{
    Person p{"John"};
 
    p.print();
 
    Address a{"Parvan", 44, "Timisoara"};
 
    p.setAddress(a);
 
    p.print();
 
    return 0;
}
