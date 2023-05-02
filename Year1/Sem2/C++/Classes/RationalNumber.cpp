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

bool RationalNumber::isLess(RationalNumber a, RationalNumber b)
{
    if(a.realValue() < b.realValue())
    {
        return true;
    }

    return false;
}

int main()
{
    int x, y;

    std::cin >> x >> y;

    RationalNumber r{x, y};

    if(r.isLess(r, 1) && r.isLess(0, r))
    {
        std::cout << "Is sub-unitary";
    }
    else
    {
        std::cout << "Is not sub-unitary";
    }

    return 0;
}