#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "Book.h"
using namespace std;

class Client
{
    public:
        Client();
        Client(string , string);
        virtual ~Client();
        string getName();
        string getPassword();
        void setName(string);
        void setPassword(string);
        void Login(string, string);
        void Logout(string, string);
        Book borrowBook(Book[], string);
        Book returnBook(Book);
        void examineLibrary();
        string searchBook(string);

    protected:

    private:
        string name;
        string password;

};

#endif // CLIENT_H