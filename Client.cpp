#include "Client.h"
#include <iostream>
//#include "Book.h"
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

bool Client::Login(string _name, string _password)
{
    if ((_name == name) && (_password == password))
    {
        cout << "Correct Login" << endl << endl;
        return 1;
    }
    else
    {
        system("CLS");
        cout << "Wrong Name or Password entered." << endl;
        return 0;
    }
}

void Client::Logout(string, string)
{
    return;
}


/*Book Client::borrowBook(Book books[], string title)
{
    for (int i = 0; i < 100; i++)
    {
        if (books[i].getTitle() == title)
        {
            return books[i];
        }
    }
}
*/

/*Book Client::returnBook(Book myBook)
{
    return myBook;
}
*/


/*string Client::searchBook(Book books[], string _title)
{
    for (int i = 0; i < 100; i++)
    {
        if (books[i].getTitle() == _title)
        {
            books[i].displayBook();
        }
    }
}
*/

