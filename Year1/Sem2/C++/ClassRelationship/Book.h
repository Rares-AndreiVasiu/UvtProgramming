#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
    std::string _title;

    std::string _author;

    std::string _description;
public:
    Book(std::string title, std::string author, std::string description);
    
    void print();
};

#endif
