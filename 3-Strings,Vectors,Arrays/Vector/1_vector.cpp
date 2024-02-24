#include<iostream>
#include<vector> //vector header

using namespace std;
/*VECTOR
vector or dynamic array is a data structure that can store a collection of data of the same type
its similar to an array but has the ability to dynamically resize.*/
int main(){

vector<string> svec;          //default initialization

vector<string> v{"a", "an", "the"}; // list initialization
//vector<string> v2("a", "an", "the"); *error

vector<int> ivec(10, -1); // ten int elements, each initialized to -1
for (int i =0;i<ivec.size();i++){
    cout<<"index:"<<i<<" "<<" value:"<<ivec[i]<<endl;
}

//List initializer or Element count
/*() When we use parentheses, we are saying that the values we supply are to be used
to construct the object. Thus, v1 and v3 use their initializers to determine the
vector’s size.
*/
/*When we use curly braces, {...}, we’re saying that, if possible, we want to
list initialize the object. That is, if there is a way to use the values inside the curly
braces as a list of element initializers, the class will do so*/

vector<int> v1(10); // v1 has ten elements with value 0
vector<int> v2{10}; // v2 has one element with value 10
vector<int> v3(10, 1); // v3 has ten elements with value 1
vector<int> v4{10, 1}; // v4 has two elements with values 10 and 1

return 0;
}