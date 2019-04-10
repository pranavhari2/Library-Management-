#include "Book.h"
#include <iostream>
using namespace std;
Book::Book()
{

}

Book::~Book()
{
    //dtor
}

Book::Book(string _title, string _author, string _description, int _numOfpages)
{
    title = _title;
    author = _author;
    description = _description;
    numOfPages = _numOfpages;
    borrowed = "No";
    returned = "No";
    return;
}

void Book::setTitle(string _title)
{
    title = _title;
    return;
}

void Book::setAuthor(string _author)
{
    author = _author;
    return;
}

void Book::setDescription(string _description)
{
    description = _description;
    return;
}

void Book::setNumofPages(string _numOfPages)
{
    numOfPages = _numOfPages;
    return;
}

string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

string Book::getDescription()
{
    return description;
}

string Book::getNumofPages()
{
    return numOfPages;
}

void Book::displayBook()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Description: " << description << endl;
    cout << "Number of Pages: " << numOfPages << endl;
}
