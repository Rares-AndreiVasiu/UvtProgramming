#include <stdio.h>

int main()
{
    int a, b, c, d;

    double average = 0.00;

    double counter = 0; 

    if(scanf("%d %d %d %d", &a, &b, &c, &d) == 4)
    {
        if(a > 0)
        {
            average += a;

            counter ++;
        }

        if(b > 0)
        {
            average += b;

            counter ++;
        }

        if(c > 0)
        {
            average += c;

            counter ++;
        }

        if(d > 0)
        {
            average += d;

            counter ++;
        }

        if(counter > 0)
        {
            printf("%.2f", average / counter);
        }
        else
        {
            printf("0.00");
        }
    }

    return 0;
}