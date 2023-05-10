#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
class Person
{
private:
    std::string _name;

    Address *address;

public:
    Person(std::string name);
    
    void setAddress(Address adr);

    void print();
};

#endif