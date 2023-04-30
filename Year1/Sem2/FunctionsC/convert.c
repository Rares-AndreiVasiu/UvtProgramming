#include <stdio.h>

int bin[32];

void convert(int n)
{
    int pos = 0;

    while(n)
    {
        bin[i++] = n % 2;

        n /= 2;
    }

    for(int j = i - 1; j >= 0; -- j)
    {
        printf("%d", bin[j]);
    }
}




