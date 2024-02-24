/***************************************************************
* A program to declare, define, and use a class that generates *
* a random-number integer between any given range defined in *
* the constructor of the class. *
***************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/***************************************************************
* Class Definition (Declaration of data members and member *
* functions) for a Random-number generator. *
***************************************************************/
class RandomInteger
{
private:
int low; // Data member
int high; // Data member
int value; // Data member
public:
RandomInteger (int low, int high); // Constructor
~RandomInteger (); // Destructor
void print () const; // Accessor member function
};
/***************************************************************
* Definitions of constructor, destructor, and accessor member *
* functions for the random number generator class *
***************************************************************/
// Constructor
RandomInteger :: RandomInteger (int lw, int hh)
:low (lw), high (hh)
{
srand (time (0));
int temp = rand ();
value = temp % (high - low + 1) + low;
}
// Destructor
RandomInteger :: ~RandomInteger ()
{
}
// Accessor member function
void RandomInteger :: print () const
{
cout << value << endl;
}
/***************************************************************
* Application to instantiate random number objects and print *
* the value of the random number *
***************************************************************/
int main ( )
{
// Generating a random integer between 100 and 200
RandomInteger r1 (100, 200);
cout << "Random number between 100 and 200: ";
r1.print ();
// Generating a random integer between 400 and 600
RandomInteger r2 (400, 600);
cout << "Random number between 400 and 600: ";
r2.print ();
// Generating a random integer between 400 and 600 ;
RandomInteger r3 (1500, 2000);
cout << "Random number between 1500 and 2000: ";
r3.print ();
return 0;
}