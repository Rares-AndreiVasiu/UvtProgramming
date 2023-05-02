#include <stdio.h>

int bin[32];

void convert(int n)
{
    int pos = 0;
    
    while(n)
    {
        bin[pos++] = n % 2;

        n /= 2;
    }

    for(int i = 0; i < 32 - pos; ++ i)
    {
        printf("0");
    }

    for(int j = pos - 1; j >= 0; -- j)
    {
        printf("%d", bin[j]);
    }
}

int main()
{
    int x;
    
    if(scanf("%d", &x) == 1)
    {
        convert(x);
    }
    return 0;
}
