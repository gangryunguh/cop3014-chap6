// This program shows how the exit function causes a program
// to stop executing.
#include <iostream>
#include <cstdlib>   // Needed for the exit function
using namespace std;

void function1();  // Function prototype

int main()
{
   function1();
   return 0;
}

//***********************************************************
// This function simply demonstrates that exit can be used  *
// to terminate a program from a function other than main.  *
//***********************************************************

void function1()
{
   cout << "This program terminates with the exit function.\n";
   cout << "Bye!\n";
   exit(EXIT_FAILURE);
   cout << "This message will never be displayed\n";
   cout << "because the program has already terminated.\n";
}