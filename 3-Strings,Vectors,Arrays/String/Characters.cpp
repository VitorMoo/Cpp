#include<iostream>
#include <string>
#include<typeinfo>

using namespace std;
/*CHARACTERS
One part of this kind of processing involves how we gain access to the characters
themselves. Sometimes we need to process every character. Other times
we need to process only a specific character, or we can stop processing once some
condition is met. It turns out that the best way to deal with these cases involves
different language and library facilities*/

int main(){

//processing every character

string str("some string");
// print the characters in str one character to a line

for (auto i : str) // for every char in str
cout << i <<endl; // print the current character followed by a newline

//other example

string s("Hello World!!!");
decltype(s.size()) punct_cnt = 0;// punct_cnt has the same type that s.size returns.

for (auto c : s) //count the number of punctuation characters in sfor every char in s
    if (ispunct(c)) // if the character is punctuation
    ++punct_cnt; // increment the punctuation counter
cout << punct_cnt
    << " punctuation characters in " << s<<endl;

char ca='5';
if(isdigit(ca)){
    cout<<ca<<" is a digit"<<endl;
}else{
    cout<<" isnt a digit"<<endl;
}
/*isalpha: Checks if c is an alphabetic character (a-z or A-Z).
isdigit: Checks if c is a digit (0-9).
isalnum: Checks if c is an alphanumeric character (a-z, A-Z, or 0-9).
sislower: Checks if c is a lowercase letter (a-z).
isupper: Checks if c is an uppercase letter (A-Z).
isspace: Checks if c is a whitespace character (space, tab, newline, etc.).
tolower: Converts c to lowercase if it is an uppercase letter; otherwise, returns c 
toupper:Converts c to uppercase if it is an lowercase letter; otherwise, returns c*/

//Change the Characters in a string

string l("Hello World!!!");
// convert s to uppercase
for (auto &c : l) // for every char in s (note: c is a reference)
c = toupper(c); // c is a reference, so the assignment changes the char in s
cout << l << endl;

// only some characters

string r("some string");
if (!r.empty()) // make sure there’s a character in s[0]
r[0] = toupper(r[0]); // assign a new value to the first character in s
cout<<r<<endl;

return 0;
}