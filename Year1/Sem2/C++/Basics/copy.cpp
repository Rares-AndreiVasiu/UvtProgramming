#include <iostream>
#include <cstring>

char *make_copy(char *array)
{
    char *copy = new char[strlen(array)];

    strcpy(copy, array);

    return copy;
}

int main()
{

}