#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLENGTH 128

char *removeDuplicates(char *s)
{
    char *p = s;

    for(size_t i = 0; i < strlen(p) - 1; ++ i)
    {
        if(p[i] == p[i + 1])
        {
            strcpy(p + i, p + i + 1);
            
            i--;
        }
    }

    return p;
}

int main()
{
    char str[MAXLENGTH];

    if(fgets(str, MAXLENGTH - 1, stdin))
    {
        printf("%s", removeDuplicates(str));
    }

    return 0;
}

//a b b c d b b c c c \0
//0 1 2 3 4 5 6 7 8 9 10
