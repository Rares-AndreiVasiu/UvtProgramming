#ifndef INTLIST_H
#define INTLIST_H

#define MAXLENGTH 1024

class IntList
{
    private:
        int arr[MAXLENGTH];
        int size;

    public:
        IntList();

        void append(int element);

        void append(const IntList& otherList);

        int lenght();

        void reverse();

        friend void print(const IntList& list);

        friend std::ostream& operator<<(std::ostream& os, const IntList& list);

        int& operator [] (int index);

        IntList operator * (int modifier);

        friend IntList operator * (int modifier, const IntList& list);
};

#endif 
