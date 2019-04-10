#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book
{
    public:
        Book();
        virtual ~Book();
        Book(string, string, string, int);
        Book(string, string, string, int, bool, bool);
        string getTitle();
        string getAuthor();
        string getDescription();
        string getNumofPages();
        void setTitle(string _title);
        void setAuthor(string _author);
        void setDescription(string _description);
        void setNumofPages(string _numOfPages);
        void displayBook();
        string borrowed;
        string returned;

    protected:


    private:
        string title;
        string author;
        string description;
        string numOfPages;
        int size;

};

#endif // BOOK_H
