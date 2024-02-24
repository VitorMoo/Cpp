#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Example using insert to add elements to a vector
    vector<int> myVector = {1, 2, 3, 4, 5};

    cout << "Original Vector: ";
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << "\n";

    // Inserting elements at a specific position
    auto it = myVector.begin() + 2;  // Iterator pointing to the third element
    myVector.insert(it, 10);         // Inserting 10 before the third element

    cout << "Vector after Insertion: ";
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << "\n\n";

    // Example using erase to remove elements from a vector
    // Removing the element at index 3
    myVector.erase(myVector.begin() + 3);

    cout << "Vector after Erasure: ";
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << "\n\n";


    // Example using swap to exchange contents of two vectors
    vector<int> anotherVector = {7, 8, 9};

    cout << "Original Vectors:\n";
    cout << "Vector 1: ";
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << "\nVector 2: ";
    for (const auto& element : anotherVector) {
        cout << element << " ";
    }
    cout << "\n\n";
    // Swapping the contents of two vectors
    myVector.swap(anotherVector);

    cout << "Vectors after Swap:\n";
    cout << "Vector 1: ";
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << "\nVector 2: ";
    for (const auto& element : anotherVector) {
        cout << element << " ";
    }
    cout << "\n";


    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector<int> vector2 = {10, 20, 30, 40, 50};

   auto itVector1 = vector1.begin() + 1;  // Second element
    auto itVector2 = vector2.begin() + 2;  // Third element

    swap(*itVector1, *itVector2);

    cout<<"\n"<<endl;

    cout << "Vector 1 after the swap: ";
    for (const auto &element : vector1) {
        cout << element << " ";
    }
    cout << "\nVector 2 after the swap: ";
    for (const auto &element : vector2) {
        cout << element << " ";
    }
    cout << "\n";

    //example using toupper     
    string s("some string");
    if (s.begin() != s.end()) { // make sure s is not empty
    auto it = s.begin(); // it denotes the first character in s
    *it = toupper(*it); // make that character uppercase
    cout<<s<<endl;
    }

    return 0;
}
