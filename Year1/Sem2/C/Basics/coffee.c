#include <stdio.h>

int main()
{
    int x;

    if(scanf("%d", &x) == 1)
    {
        int coffeeType = x & 3;

        x = x >> 2;

        int sugarContent = x & 7;

        x = x >> 3;

        int lid = x & 1;

        switch (coffeeType)
        {
            case 0:
            {
                printf("Espresso, ");
                break;
            }

            case 1:
            {
                printf("Long Coffee, ");
                break;
            }

            case 2:
            {
                printf("Cappucino, ");
                break;
            }

            case 3:
            {
                printf("Americano, ");
                break;
            }
        }

        printf("%d sugar, ", sugarContent);

        if(lid == 0)
        {
            printf("no lid");
        }
        else
        {
            printf("with lid");
        }
    }

    return 0;
}