#include <iostream>

void increase_counter(int *nr)
{
   (*nr)++;
}

void increase_counter(int& nr)
{
   nr++;
}

int main()
{
   int number;
   
   std::cin >> number;

   increase_counter(&number); // calling the function with the address of the variable

   std::cout << number << " ";

   increase_counter(number); // calling the function with a reference of the variable

   std::cout << number;

   return 0;
}