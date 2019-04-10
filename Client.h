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
        bool Login(string, string);
        void Logout();


       // void displayClient();

    protected:

    private:
        string name;
        string password;

};

#endif // CLIENT_H
