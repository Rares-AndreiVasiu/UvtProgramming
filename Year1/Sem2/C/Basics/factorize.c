#include <stdio.h>

void factorize(const int n)
{
    int d = 2;

    int cn = n;
    
    while(cn > 1)
    {
        int p = 0;

        while(cn % d == 0)
        {
            p ++;

            cn /= d;
        }

        if(p > 0)
        {
            printf("%d %d\n", d, p);
        }

        d ++;

        if(d * d > cn)
        {
            d = cn;
        }
    }
}

int main()
{
    int x;

    if(scanf("%d", &x) == 1)
    {
        factorize(x);
    }

    return 0;
}