#include<iostream>

using namespace std;
/*ARRAYS
An array is a data structure that is similar to the library vector type (§ 3.3, p. 96)
but offers a different trade-off between performance and flexibility. Like a vector,
an array is a container of unnamed objects of a single type that we access by position.
Unlike a vector, arrays have fixed size; we cannot add elements to an array.
Because arrays have fixed size, they sometimes offer better run-time performance
for specialized applications*/

int main()
{
//defining and initializating built-in arrays

const unsigned sz = 3;  //const unsigned(interger that cant store negative value) size equals to 3.
int ia1[sz] = {0,1,2}; // array of three ints with values 0, 1, 2
int a2[] = {0, 1, 2}; // an array of dimension 3
int a3[5] = {0, 1, 2}; // equivalent to a3[] = {0, 1, 2, 0, 0}
string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""}

//we cannot initialize an array as a copy of another array,int a[]={0,1}  int b[]=a.

//acessing elements of an array:

unsigned array[]={0,1,2,3,4,5,6,7,8,9,10};

for(auto &i : array){
    cout<<"\n"<<array[i];
}  
    
return 0;
}