#include <iostream>

#include "counter.h"

counter::counter()
{
    this -> cnt = 0;
}

void counter::increase()
{
    this -> cnt += 1;
}

void counter::print()
{
    std::cout << this -> cnt << '\n';
}

void counter::reset()
{
    this -> cnt = 0;
}

int main()
{
    counter A;

    A.increase();

    A.increase();

    A.print();

    A.reset();

    A.print();

    return 0;
}
