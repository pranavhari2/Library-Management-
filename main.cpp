#include <iostream>
#include <fstream>
#include "Library.h"
#include "Client.h"
#include <windows.h>
using namespace std;

Book books[100000];

int main()
{
  Library library;
  cout << "                                 Welcome to the Library" << endl << endl;
  system("PAUSE");
  system("CLS");

  library.ClientMenu();






  return 0;
