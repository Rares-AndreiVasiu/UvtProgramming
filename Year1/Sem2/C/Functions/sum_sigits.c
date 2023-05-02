#include <stdio.h>

int sum_digits(int i)
{
    int s = 0;

    while (i)
    {
        s += i % 10;
        
        i /= 10;
    }

    return s;
}

int main()
{
    int mx = -2147483647, temp, i;
    
    char ch;

    if (scanf("%d", &i) == 1)
    {
        while (i)
        {
            i--;

            scanf("%d%c", &temp, &ch);
            
            if (temp < 0)
                temp *= -1;
            
            temp = sum_digits(temp);
            
            if (temp > max)
                max = temp;
            
            if (ch == '\n')
                break;
        }
    }
    
    printf("%d\n", max);

    return 0;
}