#ifndef LIBRARY_H
#define LIBRARY_H
#include "Client.h"
#include "Book.h"


class Library
{
    public:
        Library();
        virtual ~Library();
        void AddBook();
        void DeleteBook(Book[],string);
        void ModifyBook(Book[]);
        void uploadBooks(Book[]);
        void ClientMenu();
        void LibrarianMenu();
        void searchBook(Book[], string);
        string searchBook(string);
        void examineLibrary();
        Book books[100];

    protected:

    private:
};

#endif // LIBRARY_H
