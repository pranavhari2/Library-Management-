
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
void Library::uploadBooks(Book book)
{
    ofstream myfile;
    myfile.open("Library Database.txt" , ios::out | ios::app);
    if (myfile.is_open())
    {
        myfile << "1" << "," << book.getTitle() << "," << book.getAuthor() << "," << book.getDescription() << "," << book.getNumofPages() << endl;
        myfile.close();
    }
    else
    {
        cout << "Could not open file." << endl;
    }
}

void Library::AddBook(/*Book book*/)
{
    string title;
    string auth;
    string desc;
    int pages;

  cout << "Title: ";
  getline(cin, title);
  cout << "Author: ";
  getline(cin, auth);
  cout << "Description (keep it short): ";
  getline(cin, desc);
  cout << "Num of pages: ";
  cin >> pages;
  Book book(title, auth, desc, pages);

    uploadBooks(book);

  ifstream file;
  string line;
  file.open("Library Database.txt");
  if (file.is_open())
  {
    while ( getline (file,line,',') )
    {
        cout << line << endl;
    }
    file.close();
  }

  else cout << "Unable to open file";

  }

void Library::DeleteBook(Book books[])
{

}
void Library::ModifyBook(Book books[])
{

}

void Library::ClientMenu()
{
  /*
  string name;
  string password;
  bool login;

  cout << "                                 Enter New Login Information:" << endl << endl;

  cout << "Name: ";
  cin >> name;
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
  */
  AddBook();


  return;

}


