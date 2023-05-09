#include <iostream>
#include <string.h>

#include "IntList.h"
// implement here the class functions

IntList::IntList()
{
    memset(this->arr, 0, MAXLENGTH - 1);

    this->size = 0;
}

void IntList::append(int element)
{
    if (this->size + 1 < MAXLENGTH)
    {
        this->arr[this->size] = element;

        this->size++;
    }
}

void IntList::append(const IntList &otherList)
{
    if (this->size + otherList.size < MAXLENGTH)
    {
        // std::cout << "we append" << '\n';

        int n = this->size + otherList.size;

        int ct = 0;

        for (int i = size; i < n; ++i)
        {
            this->arr[i] = otherList.arr[ct++];

            // std::cout << this -> arr[i] << ' ';
        }

        this->size = n;
    }
}

int IntList::lenght()
{
    return this->size;
}

void IntList::reverse()
{
    int start = 0;
    int end = this->size;

    while (start < end)
    {
        std::swap(this->arr[start], this->arr[end]);

        start++;
        end--;
    }
}

void print(const IntList &list)
{
    std::cout << '[' << list.arr[0];

    for (int i = 1; i < list.size; ++i)
    {
        std::cout << ',' << list.arr[i];
    }

    std::cout << ']';

    std::cout << '\n';
}

std::ostream &operator<<(std::ostream &os, const IntList &list)
{
    os << '[';

    for (int i = 0; i < list.size - 1; ++i)
    {
        os << list.arr[i] << ',';
    }

    os << list.arr[list.size - 1];

    os << ']';

    return os;
}

int &IntList::operator[](int index)
{
    if (index >= 0)
    {
        // std::cout << index << '\n';

        return this->arr[index];
    }
    else
    {
        int posIndex = index * (-1);

        int endPos = this->size;

        // std::cout << endPos - posIndex << '\n';

        return this->arr[endPos - posIndex];
    }
}

IntList IntList::operator*(int modifier)
{
    int n = this->size;

    IntList temp;

    for (int i = 1; i <= modifier; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            temp.append(this->arr[j]);
        }
    }

    return temp;
}

IntList operator*(int modifier, const IntList &list)
{
    int n = list.size;

    IntList temp;

    for (int i = 1; i <= modifier; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            temp.append(list.arr[j]);
        }
    }

    return temp;
}

int main()
{
    IntList l;

    l.append(1);

    l.append(2);

    l.append(4);

    std::cout << l; // should print [1,2,4]

    std::cout << std::endl;

    std::cout << l[0] << std::endl; // should print 1

    l[-1] = 3;
    std::cout << l << std::endl; // should print [1,2,3]

    l = 2 * l;
    std::cout << l << std::endl; // should print [1,2,3,1,2,3]

    l = l * 2;
    std::cout << l << std::endl; // should print [1,2,3,1,2,3,1,2,3,1,2,3]

    return 0;
}
