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

void Library::examineLibrary()
{
    cout << "Books: " << endl;
    for (int i = 0; i < _size; i++)
    {

        cout << "Title: " << books[i].getTitle() << ", " << "Author: " << books[i].getAuthor() << ", " << "Description: " << books[i].getDescription() << ", " << "Number of Pages: " << books[i].getNumofPages() << ", " << "Borrowed: " << books[i].borrowed << ", " << "Returned: " << books[i].returned <<   endl << endl;

    }
    return;
}

// Downloads edited book list to txt file and replaces the original with the new one.
void Library::downloadBooks()
{
    ofstream myfile;
    myfile.open("Library Database.txt" , ios::out | ios::ate);

    for (int i = 0; i < 3; i++)
    {
        myfile << i+1 << "" << books[i].getTitle() << "" << books[i].getAuthor() << "" << books[i].getDescription() << "" << books[i].getNumofPages() << "" << books[i].borrowed << "" << books[i].returned << endl;

    }
     myfile.close();
     return;
}

//=============================================
void Library::uploadBooks()
{
    string title;
    string auth;
    string desc;
    string pages;
    string borr;
    string retrn;

    ifstream myfile("Library Database.txt" , ios::in | ios::ate);
    if (myfile.is_open())
    {
        while(myfile >>  title >> auth >> desc >> pages >> borr >> retrn)
        {
            cout  <<  title << auth << desc << pages << borr << retrn;
        }
        myfile.close();

    }


     myfile.close();
     return;
}


//===================================================
void Library::AddBook(int& _size)
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
    cout << endl;

    Book book(title, auth, desc, pages);
    books[_size-1] = book;


    _size++;
    return;
}

//===================================================

void Library::DeleteBook(string _title)
{
    for (int i = 0; i < 10; i++)
    {
        if (books[i].getTitle() == _title)
        {
            for (int j = i; j < 10; j++)
            {
                books[j] = books[j+1];

            }
            books[_size-1].setTitle(" ");
            books[_size-1].setAuthor(" ");
            books[_size-1].setDescription(" ");
            books[_size-1].setNumofPages(0);
            _size--;
            cout << "delete success" << endl;;
            return;

        }

        else
        {
            cout << "No Book Found. ";
        }
    }
}
//===============================================
void Library::ModifyBookName(string _bookname, string val)
{
    for (int i = 0; i < 10; i++)
    {
        if (_bookname == books[i].getTitle())
        {
            books[i].setTitle(val);
        }
        else
        {
            cout << "This book was not found. " << endl;
        }
    }

}
//==================
void Library::ModifyBookAuth(string _bookname, string val)
{
    for (int i = 0; i < 10; i++)
    {
        if (_bookname == books[i].getTitle())
        {
            books[i].setAuthor(val);
        }
        else{cout << "This book was not found. " << endl;}
    }

}
//==================
void Library::ModifyBookDesc(string _bookname, string val)
{
    for (int i = 0; i < 10; i++)
    {
        if (_bookname == books[i].getTitle())
        {
            books[i].setDescription(val);
        }
        else{cout << "This book was not found. " << endl;}
    }

}

//===================================================
void Library::searchBook(string val)
{
    for (int i = 0; i < 10; i++)
    {
        if ((val == books[i].getTitle() ) or (val == books[i].getAuthor() ) or (val == books[i].getDescription() ))   // displays all books that match criteria
        {
            cout << "Book Found. " << endl << endl;
            books[i].displayBook();
            return;
        }
        else
        {
            return;
        }
    }
}
//===================================================
//===================================================

void Library::ClientMenu()     // Client start menu before doing anything
{


  int option;


  string name;
  string password;
  bool login;
  cout << "                                 Enter New Login Information:" << endl << endl;
  cout << "Name: ";
  cin >> name;
  cout << "Password: ";
  cin >> password;
  cout << "\n";
  Client client(name, password);
  cout << "Username: " << client.getName() << endl;
  cout << "Password: " << client.getPassword() << endl;

  while(true)    // Repeats Login while right information is not entered
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

//===================================  Menu Starts
    system("CLS");

    while(true)
    {


    cout << "\n";
    cout << "1. Borrow       " << "2. Return       " << "3. Examine Library       " << "4. Search for a Book    " << " Enter anything to logout " << endl;
    cin >> option;

    if (option == 1)
    {
        system("CLS");
        int option2;
        string val;
        cout << "Search by:   1. Title   or     2. Author   or   3. Examine the Library";
        cin >> option2;
        if (option2 == 1)
        {
            system("CLS");
           cout << " Enter The Title of the book you want to borrow: " << endl;
           cin >> val;
           borrowBook(val);
        }
        else if (option2 == 2)
        {
            system("CLS");
           cout << " Enter The Author of the book you want to borrow: " << endl;
           cin >> val;

           borrowBook(val);
        }
        else if (option2 == 3)
        {
            system("CLS");
            examineLibrary();
            cout << " Enter The Title of the book you want to borrow: " << endl;
            cin >> val;
            borrowBook(val);

        }
        else{cout << "Invalid. " << endl;}


    }
    else if (option == 2)
    {
        system("CLS");
        string val;
        cout << " Enter The Author: " << endl;
        cin >> val;

        returnBook(val);
    }
    else if (option == 3)
    {
        system("CLS");
        examineLibrary();
    }
    else if (option == 4)
    {
        system("CLS");
        string val;
        cout << " Enter Anything to search for: " << endl;
        cin >> val;
        searchBook(val);
    }
    else
    {
        client.Logout();

    }

    }
}




//=============================================   Librarian Options

void Library::LibrarianMenu()
{

while(true)
{

  int option;
  cout << "1. Add a Book       " << "2. Delete a Book     " << "3. Modify a Book" << "       4. Logout" << endl << endl;
  cin >> option;
    if (option == 1)

    {
    system("CLS");
    AddBook(_size);
    }
    else if (option == 2)
    {
    system("CLS");
    string delbook;
    examineLibrary();
    cout << "\n";
    cout << "  Choose a book to delete" << endl;
    cin >> delbook;

    DeleteBook(delbook);
    }

    else if (option == 3)
    {
    system("CLS");
    string bktitle;
    string newVal;
    int opt4;

    examineLibrary();
    cout << endl;
    cout << "Enter the title of the book to modify: " << endl << endl;
    cin >> bktitle;
    cout << "Enter what property you want to edit:      1. Title       or      2. Author     or       3. Description  " << endl;
    cin >> opt4;

        if (opt4 == 1)
        {
            cout << "Enter New Title: " << endl;
            cin >> newVal;
           ModifyBookName(bktitle, newVal);

        }
        else if (opt4 == 2)
        {
            cout << "Enter New Author: " << endl;
            cin >> newVal;
           ModifyBookAuth(bktitle ,newVal);

        }
        else if (opt4 == 3)
        {
            cout << "Enter New Description: " << endl;
            cin >> newVal;
           ModifyBookDesc(bktitle, newVal);
        }

    }
    else
    {
    system("CLS");
    return;
    }
}
}

//=====================================================
//======================================================
void Library::borrowBook(string val)
{
    for (int i = 0; i < 10; i++)
    {
        if ((val == books[i].getAuthor()) or (val == books[i].getTitle()))
        {
            books[i].borrowed = 1;
            cout << "Book Borrowed. ";
            return;
        }
        else
        {
            cout << "This book was not found. " << endl;
        }
    }
}


void Library::returnBook(string val)
{
    for (int i = 0; i < 100; i++)
    {
        if ((val == books[i].getAuthor()) or (val == books[i].getTitle()))
        {
            books[i].returned = 1;
            books[i].borrowed = 0;
            cout << "Book Returned. ";
            return;
        }
    }
}
