#include<iostream>

using namespace std;
/*A pointer is a compound type that “points to” another type. Like references, pointers
are used for indirect access to other objects. Unlike a reference, a pointer is an
object in its own right. Pointers can be assigned and copied; a single pointer can
point to several different objects over its lifetime. Unlike a reference, a pointer
need not be initialized at the time it is defined*/

int main(){
//declaring
int ival = 42;
int *p = &ival;     // p holds the address of ival; p is a pointer to ival
cout << *p<<endl;         // * yields the object to which p points; prints 42

//dereferencing 
//When we assign to *p, we are assigning to the object to which p points.
*p = 0; // * yields the object; we assign a new value to ival through p
cout << *p; // prints 0

//NULL pointers
//A null pointer does not point to any object. Code can check whether a pointer is
//null before attempting to use it.

int *p1 = nullptr; //best way, equivalent to int *p1 = 0;
int *p2 = 0; // directly initializes p2 from the literal constant 0
            // must #include cstdlib
int *p3 = NULL; // equivalent to int *p3 = 0;


return 0;
}