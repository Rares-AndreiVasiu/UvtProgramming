#include <iostream>

#include "Point2D.h"

Point2D::Point2D(int x, int y)
{
    this -> x = new int;

    this -> y = new int;
    
    *(this -> x) = x;

    *(this -> y) = y;
}

Point2D::Point2D(const Point2D& other)
{
    this -> x = new int;

    this -> y = new int;

    *(this -> x) = *(other.x);

    *(this -> y) = *(other.y);
}

int Point2D::getX()
{
    return *(this -> x);
}

int Point2D::getY()
{
    return *(this -> y);
}

Point2D::~Point2D()
{
    delete this -> x;

    delete this -> y;
}


int main()
{
    int x, y;

    std::cin >> x >> y;
    
    Point2D p1{x,y};
    {
        Point2D p2(p1);
    }
    
    std::cout << p1.getX() << " " << p1.getY() << std::endl;

    return 0;
}