#ifndef LIBRARY_H
#define LIBRARY_H
#include "Client.h"
#include "Book.h"


class Library
{
    public:
        Library();
        virtual ~Library();
        void AddBook(int&);//works
        void DeleteBook(string);//works
        void ModifyBookName(string , string);
        void ModifyBookAuth(string , string);
        void ModifyBookDesc(string , string);
        void downloadBooks();//works
        void uploadBooks();
        void ClientMenu();
        void LibrarianMenu();
        void searchBook(string);
        void examineLibrary();//works
        void borrowBook(string);//works
        void returnBook(string);//works
        Book books[100];
        int _size = 1;

    protected:

    private:
};

#endif // LIBRARY_H
