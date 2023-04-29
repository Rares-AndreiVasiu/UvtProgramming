#include <iostream>

#include "RationalNumber.h"

RationalNumber::RationalNumber()
{
    this -> n = 0;

    this -> N = 1;
}

RationalNumber::RationalNumber(int numerator)
{
    this -> n = numerator;

    this -> N = 1;
}

RationalNumber::RationalNumber(int numerator, int denominator)
{
    this -> n = numerator;

    this -> N = denominator;
}

int RationalNumber::getNumerator()
{
    return this -> n;
}

int RationalNumber::getDenominator()
{
    return this -> N;
}

void RationalNumber::print()
{
    std::cout << this -> n << "/" << this -> N << '\n';
}

void RationalNumber::increment()
{
    this -> n = n + N;
}

double RationalNumber::realValue()
{
    return (double) (this -> n / (this -> N * 1.0));
}
int main()
{
    int x,y;
    std::cin>>x>>y;
    RationalNumber r{x,y};
    r.print();
    r.increment();
    r.print();
    std::cout<<r.realValue()<<std::endl;
    return 0;
}