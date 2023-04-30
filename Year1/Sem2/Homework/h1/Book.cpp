#include <iostream>
#include <string>

#include "Book.h"

Book::Book(std::string title, std::string author, int pages)
{
    this -> _title = title;

    this -> _author = author;

    this -> _pages = pages;
}

int Book::getPages()
{
    return this -> _pages;
}

std::string Book::getAuthor()
{
    return this -> _author;
}

std::string Book::getTitle()
{
    return this -> _title;
}

Book Book::comparePagesBooks(Book a, Book b)
{
    if(a.getPages() < b.getPages())
    {
        return b;
    }

    return a;
} 

void Book::print()
{
    std::cout << this ->_author << ' ' << this ->_title << ' ' << this ->_pages << '\n';
}

int main()
{
    Book b1{"The Shining", "Stephen King", 447};

    Book b2{"Pet Sematary", "Stephen King", 416};

    b1.print();

    b2.print();

    Book b3 = b1.comparePagesBooks(b1, b2);

    b3.print();

    return 0;
}