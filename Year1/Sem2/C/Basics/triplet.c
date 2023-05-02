#include <stdio.h>

int main()
{
    for(int i = 2; i < 20; ++ i)
    {
        for(int j = 1; j < i; ++ j)
        {
            for(int k = i + 1; k <= 20; ++ k)
            {
                if(j * j + i * i == k * k)
                {
                    printf("%d %d %d\n", j, i, k);
                }
            }
        }
    }

    return 0;
}