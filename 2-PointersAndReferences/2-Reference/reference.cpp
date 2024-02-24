#include <iostream>
using namespace std;
/*A reference defines an alternative name for an object. A reference type “refers
to” another type. We define a reference type by writing a declarator of the form
&d, where d is the name being declared.
Ordinarily, when we initialize a variable, the value of the initializer is copied into
the object we are creating. When we define a reference, instead of copying the initializer’s
value, we bind the reference to its initializer.*/

int main ( )
{
// Creation of reference relations
int score = 92;
int& rScore = score;
// Using data variable
cout << "Accessing value through data variable." << endl;
cout << "score: " << score << endl;
// Using reference variable
cout << "Accessing value through reference variable." << endl;
cout << "rScore: " << rScore<<endl;

//assigning using reference:
rScore=7;
cout<<"\nAfter changing the value:\n"<<endl;
cout<<"Acessing value through reference variable: "<<rScore<<"\n"<<"Acessing value through data variable: "<<score;
return 0;
}