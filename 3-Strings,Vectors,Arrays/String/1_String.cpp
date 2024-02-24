#include<iostream>
#include<string>                     //string header
using namespace std;

/*STRINGS
A string is a variable-lenght sequence of characters*/
int main(){
//Defining and initializating a string

string s1;          //default initialization,s1 is empty
string s2=s1;       //s2 is a copy of s1
string s3="vitor";  //s3 is a copy of the string literal
string s4("v");  //s4 is vvvvvvvvvv
string s5 = "hiya"; // copy initialization
string s6("hiya"); // direct initialization

//Operations and Writing strings

string s; // empty string
cin >> s; // It reads until it encounters whitespace or a newline character
cout << s << endl; // write s to the output

string sentence;
cout << "write a phrase: ";  //reads a whole line, including whitespace, from the input stream.
cin.ignore();               //Before calling getline, there might still be characters in the input buffer,
                            //especially if you've used cin before. 
getline(cin, sentence);
cout<<sentence<<"\n";


    string a = "Hello";
    if (a.empty()) {                    //empty() verifys if the string is empty
        cout << "this string is empty" << endl;
    } else {
        cout << "this string is not empty" << endl;
    } 

string g("ola");
cout<<g.size()<<endl;     //shows the size of the string and the output is unsigned
 
    return 0;
}