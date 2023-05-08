#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXLENGTH 512

typedef struct _person
{
    char * name;
    int age;

}person;


person *make_person(char *s, int age)
{
    person *Person = malloc(sizeof(person));

    Person->name = malloc(sizeof(char) * strlen(s));
    
    strcpy(Person->name, s);

    Person->age = age;

    return Person;
}

int main()
{
    char s[MAXLENGTH];

    int age, n;

    if(scanf("%d", &n) == 1)
    {
        person **Person = malloc(sizeof(person) * n);

        if(!Person)
        {
            return 0;
        }

        for(int i = 1; i <= n; ++ i)
        {
            if(scanf("%511s %d", s, &age) == 2)
            {
                Person[i] = malloc(sizeof(person));

                Person[i] = make_person(s, age);
            }
        }

        for(int i = 1; i <= n; ++ i)
        {
            printf("%s %d\n", Person[i]->name, Person[i]->age);
        }   
    }

    return 0;
}
