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
       // Book(string, string, string, int, bool, bool);
        string getTitle();
        string getAuthor();
        string getDescription();
        int getNumofPages();
        void setTitle(string _title);
        void setAuthor(string _author);
        void setDescription(string _description);
        void setNumofPages(int _numOfPages);
        void displayBook();
        bool borrowed;
        bool returned;

    protected:


    private:
        string title;
        string author;
        string description;
        int numOfPages;

};

#endif // BOOK_H
