#include "Library.h"
#include "Client.h"
#include "Book.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

Library::Library()
{
    //ctor
}

Library::~Library()
{
    //dtor
}

// Uploads edited book list to txt file and replaces the original with the new one.
void Library::uploadBooks(Book books[])
{
    ofstream myfile;
    myfile.open("Library Database.txt" , ios::out | ios::app);
    for (int i = 0; i < 100; i++)
{
    if (myfile.is_open())
    {
        myfile << "," << books[i].getTitle() << "," << books[i].getAuthor() << "," << books[i].getDescription() << "," << books[i].getNumofPages() << ", " << "0" << ", " << "0" << endl;
        myfile.close();
    }
    else
    {
        cout << "Could not open file." << endl;
    }
}
}

//===================================================
void Library::AddBook(Book books[], int _size)
{
string title;
string auth;
string desc;
int pages;

  cin.ignore();
  cout << "Title: ";
  getline(cin,title);
  cout << "Author: ";
  getline(cin, auth);
  cout << "Description (keep it short): ";
  getline(cin, desc);
  cout << "Num of pages: ";
  cin >> pages;

  Book book(title, auth, desc, pages);
  books[_size] = book;

  }

//===================================================

void Library::DeleteBook(Book books[], string _title)
{
    for (int i = 0; i < 100; i++)
    {
        if (books[i].getTitle() == _title)
        {

        }
    }
}
//===============================================
void Library::ModifyBook(Book books[])
{



}
//===================================================
void Library::searchBook(Book books[], string _title)
{
    for (int i = 0; i < 100; i++)
    {
        if (books[i].getTitle() == _title)
        {
            books[i].displayBook();
        }
    }
}
//===================================================

void Library::ClientMenu()
{
  int option;
  // Client start menu before performing search and stuff

  string name;
  string password;
  bool login;
  cout << "                                 Enter New Login Information:" << endl << endl;
  cout << "Name: ";
  cin >> name;cout << "1. Borrow       " << "2. Return       " << "3. Examine Library       " << "4. Search for a Book    " << " Enter anything to logout " << endl;
  cin >> option;
  cout << "\n";
  cout << "Password: ";
  cin >> password;
  cout << "\n";
  Client client(name, password);
  cout << "Username: " << client.getName() << endl;
  cout << "Password: " << client.getPassword() << endl;
  while(true)
  {
      cout << "                                 Enter Login Information:" << endl << endl;
  cout << "Name: ";
  cin >> name;
  cout << "\n";
  cout << "Password: ";
  cin >> password;
  cout << "\n";
  login = client.Login(name, password);

  if (login == 1)
  {
      break;
  }
  }

  cout << "\n";
  cout << "1. Borrow       " << "2. Return       " << "3. Examine Library       " << "4. Search for a Book    " << " Enter anything to logout " << endl;
  cin >> option;
  if (option == 1)
  {
     client.borrowBook();
  }
  else if (option == 2)
  {
      client.returnBook()
  }
  else if (option == 3)
  {
      examineLibrary();
  }
  else if (option == 4)
  {
      searchBook();
  }
  else
  {
      client.Logout();
  }

  return;
}

void Library::LibrarianMenu()
{
  int option;
  cout << "1. Add a Book       " << "2. Delete a Book     " << "3. Modify a Book" << "4. Logout" << endl;
  cin >> option;
  if (option == 1)

      {
         AddBook(books[], i);
         i++;
      }

  }
}
