#include<iostream>
#include<vector>
using namespace std;

int main(){
//Adding elements to a vector

vector<int> v1;
for (int i=0;i<10;i++){
    v1.push_back(i);        //append sequencial integers to v1
}                           // at the end of the loop v1 has 11 elements,0...10.

for (auto i : v1 ){
    cout<<i<<endl;      //reading v1
}

//adding strings
string word;
vector<string> text; // empty vector
while (cin >> word) {
text.push_back(word); // append word to text
}

for (const auto& w : text) {
        cout << w << " ";   //reading 
    }
    cout << endl;


vector<int> v{1,2,3,4,5,6,7,8,9};

for (auto &i : v) // for each element in v (note: i is a reference)
    i *= i; // square the element value

for (auto i : v) // for each element in v
    cout << i << " "; // print the element
cout << endl;

//More vectors operations
/*v.empty() Returns true if v is empty; otherwise returns false.
v.size() Returns the number of elements in v.
v.push_back(t) Adds an element with value t to end of v.
v[n] Returns a reference to the element at position n in v.*/
    
return 0;
}