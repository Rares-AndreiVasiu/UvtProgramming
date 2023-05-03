#include <iostream>
#include <string>
#include <cmath>

#include "Product2.h"

//implement here class functions
Product::Product(std::string name, int quantity)
{
    this -> _productName = name;

    this -> _quantity = quantity;

    _totalItems += quantity;
}

int Product::_totalItems = 0; // we set the value equal to 0

int Product::getNumberOfItems()
{
    return _totalItems;
}

Product::~Product()
{
    _totalItems -= this ->_quantity;
}

void Product::sell(int quantity)
{
    int toBeSoldQuantity = std::min(quantity, this -> _quantity);

    this ->_quantity -= toBeSoldQuantity;

    _totalItems -= toBeSoldQuantity;
}

void print(const Product& product)
{
    std::cout << product._productName << ": " 
    << product._quantity << " pieces";
    
}

int main()
{
    std::string name;
    int quantity;
    std::cin >> name >> quantity;

    Product a{name, quantity};

    print(a);
}
