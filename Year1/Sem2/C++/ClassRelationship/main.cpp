#include <iostream>
#include <string>
#include <iomanip>

#define MAXWIDTH 30

#include "Book.h"
#include "FormattedPrint.h"

Book::Book(std::string title, std::string author, std::string description)
{
    this ->_title = title;

    this -> _author = author;

    this -> _description = description;
}

void FormattedPrint::center(std::string text)
{
    int size = text.size();

    int width = (MAXWIDTH - size) / 2;

    for(int i = 1; i <= width; ++ i)
    {
        std::cout << ' ';
    }

    std::cout << text << '\n';
}

void FormattedPrint::left(std::string text)
{
    int n = text.size();

    for(int i = 0; i < n; ++ i)
    {
        if(i % MAXWIDTH == 0)
        {
            std::cout << '\n';
        }
        std::cout << text[i];
    }
}

void FormattedPrint::right(std::string text)
{
    std::cout << std::setw(30) << std::right << text << '\n';
}

void Book::print()
{   
    FormattedPrint::center(this->_title);
    
    FormattedPrint::right(this->_author);
    
    FormattedPrint::left(this->_description);
}

int main()
{
    std::string title, author, description;

    std::getline(std::cin,title);

    std::getline(std::cin,author);

    std::getline(std::cin,description);

    Book favoriteBook{title, author, description};

    std::cout << "My favorite book is:" << std::endl;

    favoriteBook.print();

    return 0;
}