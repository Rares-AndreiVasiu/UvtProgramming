#include <iostream>

int computation(int x, int a = 0, int m = 1)
{
    return (x + a) * m;
}

int main()
{
    int x;

    std::cin >> x;

    std::cout << computation(x) << ' ' << computation(x + 1) << ' ' << computation(2 * x);

    return 0;
}