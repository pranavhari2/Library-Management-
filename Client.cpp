#include "Client.h"
#include <iostream>
#include "Book.h"
using namespace std;
Client::Client()
{

}

Client::~Client()
{
    //dtor
}

Client::Client(string _name, string _password)
{
    name = _name;
    password = _password;
}

string Client::getName()
{
    return name;
}

string Client::getPassword()
{
    return password;
}

void Client::setName(string _name)
{
    name = _name;
    return;
}

void Client::setPassword(string _password)
{
    password = _password;
    return;
}

void Client::Login(string _name, string _password)
{
    if ((_name == name) && (_password == password))
    {
        cout << "Correct Login" << endl;
    }
}

void Client::Logout(string, string)
{
    return;
}

Book Client::borrowBook(Book books[], string title)
{
    for (int i = 0; i < 100; i++)
    {
        if (books[i].getTitle() == title)
        {
            return books[i];
        }
    }
}

Book Client::returnBook(Book myBook)
{

}

void Client::examineLibrary()
{

}

string Client::searchBook(string _title)
{

}
