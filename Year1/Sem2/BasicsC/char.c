#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    if(scanf("%c", &c) == 1)
    {
        if(islower(c))
        {
            printf("%c", toupper(c));
        }
        else
        {
            if(isupper(c))
            {
                printf("%c", tolower(c));
            }
            else
            {
                printf("%d", c);
            }
        }
    }

    return 0;
}
