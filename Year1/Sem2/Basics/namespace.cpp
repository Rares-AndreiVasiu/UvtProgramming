#include <iostream>

namespace Integer
{
   int sum(float a, float b)
   {
       return (int)(a)+(int)(b);
   }
}

namespace Real
{
   float sum(float a, float b)
   {
       return (a+b);
   }
}

float operation(float x, float y)
{
    return Integer::sum(x, y);
}

int main()
{
    float a, b;

    std::cin >> a >> b;

    std::cout << operation(a, b);

    return 0;
}
