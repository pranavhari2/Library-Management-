#ifndef LIBRARY_H
#define LIBRARY_H
#include "Client.h"
#include "Book.h"


class Library
{
    public:
        Library();
        virtual ~Library();
        void AddBook(/*Book[]*/);
        void DeleteBook(Book[]);
        void ModifyBook(Book[]);
        void uploadBooks(Book);
        void ClientMenu();

    protected:

    private:
};

#endif // LIBRARY_H
