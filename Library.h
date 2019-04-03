#ifndef LIBRARY_H
#define LIBRARY_H
#include "Client.h"
//#include "Librarian.h"

class Library
{
    public:
        Library();
        virtual ~Library();
        void AddBook(Book);
        void DeleteBook(Book);
        void ModifyBook(Book);

    protected:

    private:
};

#endif // LIBRARY_H
