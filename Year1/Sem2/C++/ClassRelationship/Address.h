#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
private:
    std::string _street;

    int _number;

    std::string _city;
public:
    Address(std::string street, int number, std::string city);

    void print();

    std::string getCity();
};


#endif