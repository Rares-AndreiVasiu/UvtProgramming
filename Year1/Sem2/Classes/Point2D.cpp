#include <iostream>

#include "Point2D.h"

Point2D::Point2D(int x, int y)
{
    this -> x = x;

    this -> y = y;
}

int Point2D::getX()
{
    return this -> x;
}

int Point2D::getY()
{
    return this -> y;
}

int main()
{
    int x, y;

    std::cin >> x >> y;
    
    Point2D p1 = Point2D(x,y);
    
    std::cout << p1.getX() << " " << p1.getY() << std::endl;
}