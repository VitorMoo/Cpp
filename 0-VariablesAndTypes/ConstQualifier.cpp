#include<iostream>
using namespace std;
/*Sometimes we want to define a variable whose value we know cannot be changed.
For example, we might want to use a variable to refer to the size of a buffer size.
Using a variable makes it easy for us to change the size of the buffer if we decided
the original size wasn’t what we needed. On the other hand, we’d also like
to prevent code from inadvertently giving a new value to the variable we use to
represent the buffer size. We can make a variable unchangeable by defining the
variable’s type as const:*/

int main(){
//example

const int bufSize = 512; // input buffer size
//bufSize = 518;  error: attempt to write to const object


//references to a const 
//is a reference that refers to a const type. Unlike an ordinary reference, a reference to const cannot be used to change
//the object to which the reference is bound:

const int ci = 1024;
const int &r3 = ci; //both reference and underlying object are const

//reference to a const

int i = 42;
int &r1 = i; // r1 bound to i
const int &r2 = i; // r2 also bound to i; but cannot be used to change i
r1 = 0; // r1 is not const; i is now 0
//r2 = 0; // error: r2 is a reference to const


return 0;
}