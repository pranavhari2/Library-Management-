#include <iostream>
#include <fstream>
#include <Library.h>
using namespace std;

Book books[100000];

int main()
{

  Book book1("SS" , "SSS", "SSSSSS", 10);
  book1.displayBook();
  book1 = books[0];

  ofstream myfile;
  myfile.open ("Library Database.txt");
  myfile << book1.getTitle();
  myfile.close();
  return 0;


}

