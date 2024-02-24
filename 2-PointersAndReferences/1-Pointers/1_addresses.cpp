/***************************************************************
* The program to define three variables and to print their *
* values and their addresses in the memory *
***************************************************************/
#include <iostream>
using namespace std;
int main ( )
{
// Declaration of three data variables
bool flag = true;
int score = 92;
double average = 82.56;

// Printing size, value, and address of the flag variable
cout << "A variable of type bool" << endl;
cout << "Size: " << sizeof (flag) << " " ;      
cout << "Value: " << flag << " ";
cout << "Address: "<< &flag << endl << endl;    //The address of a variable is the address of the first byte
                                                //occupied by that variable.

// Printing size, value, and address of the score variable
cout << "A variable of type int" << endl;
cout << "Size: " << sizeof (score) << " " ;
cout << "Value: " << score << " ";
cout << "Address: "<< &score << endl << endl;      //The addresses are displayed using hexadecimal notation. 
                                                   //the addresses are not integers;
                                                    //they are pointer types, as we will see shortly.

// Printing size, value, and address of the average variable
cout << "A variable of type double" << endl;
cout << "Size: " << sizeof (average) << " " ;
cout << "Value: " << average << " ";
cout << "Address: "<< &average << endl;

return 0;
}