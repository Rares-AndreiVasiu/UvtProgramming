#ifndef BOOK_H
#define BOOK_H

class Book
{
    private:
        std::string _title;
        std::string _author;

        int _pages;

    public:
        Book(std::string title, std::string author, int pages);
        
        int getPages();

        std::string getAuthor();

        std::string getTitle();

        Book comparePagesBooks(Book a, Book b);

        void print();
};

#endif
