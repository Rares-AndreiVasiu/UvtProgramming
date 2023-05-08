#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    char * name;
    int age;
};

struct  person make_person(char *s, int age)
{
    struct person Person;

    Person.name = malloc(sizeof(char) * strlen(s));
    
    strcpy(Person.name, s);

    Person.age = age;

    return Person;
}

int main()
{
    char s[]= "John";
    int age = 42;

    struct person Person = make_person(s, age);
    
    printf("%s %d", Person.name, Person.age);

    return 0;   
}
