#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

class RationalNumber
{
    public:
        /*
            the default constructor that initialize the number with 0/1
        */
        RationalNumber(); 
        
        /*
            constructor with one integer parameter that will initialize 
            the RationalNumber with that value
        */
        RationalNumber(int numerator);

        /*
            constructor with two integer parameters
        */
        RationalNumber(int numerator, int denominator);
        
        /*
            method that prints the rational number in the form of n/N
        */
        void print();

        /*
            method that will add value of 1 to the RationalNumber  
        */
        void increment();

        /*
            method that will return the float value coresponding to n/N
        */
        double realValue();
        
        int getNumerator();

        int getDenominator();

    private:
        int n, N;
};

#endif