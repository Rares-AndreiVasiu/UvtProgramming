#include <iostream>
#include <string>
#include <cmath>

#include "Product.h"

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

void Product::sell(int quantity)
{
    int toBeSoldQuantity = std::min(quantity, this -> _quantity);

    this ->_quantity -= toBeSoldQuantity;

    _totalItems -= toBeSoldQuantity;
}

int main()
{
    Product a{"T-shirt",15};

    Product b{"Skirt", 10};
    {
        Product c{"Hat",20};

        std::cout << "Items:" << a.getNumberOfItems() << std::endl;//should print 45
        
        c.sell(10);
        
        std::cout << "Items:" << c.getNumberOfItems() << std::endl;//should print 35
    }
    
    std::cout << "Items:" << Product::getNumberOfItems() << std::endl;//should print 35
    
    b.sell(20);
    
    std::cout << "Items:" << Product::getNumberOfItems() << std::endl;//should print 15
}
