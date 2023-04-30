#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXCHAR 128

#define MAXLINE 1024

int main()
{
    char line[MAXLINE];

    int frequency[MAXCHAR] = {0};

    if (fgets(line, MAXLINE, stdin))
    {
        for (size_t i = 0; i < strlen(line); ++ i)
        {
            if (isalpha(line[i]) && line[i] < MAXCHAR)
            {
                frequency[tolower(line[i])]++;
            }
            else if (line[i] != '\n' && line[i] < MAXCHAR) //we don't want to freq the newline
            {
                frequency[(int) line[i]]++;
            }
        }

        for (int i = 0; i < MAXCHAR; ++i)
        {
            if (frequency[i] > 0)
            {
                printf("%c %d\n", (char)(i), frequency[i]);
            }
        }
    }

    return 0;
}
