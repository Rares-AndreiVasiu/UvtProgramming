#include <stdio.h>

int reversed(int x)
{
    int y = 0;

    while(x)
    {
        y = (y * 10) + (x % 10);

        x /= 10; 
    }

    return y;
}

int isPalindrome(const int x)
{
    if(reversed(x) == x)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int x;

    if(scanf("%d", &x) == 1)
    {
        if(isPalindrome(x))
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }

    return 0;
}