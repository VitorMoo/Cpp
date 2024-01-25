#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Example using range-based for loop for a vector
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Using range-based for loop
    cout << "Using Range-Based For Loop:\n";
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << "\n\n";


    // Example using traditional iterator for a vector
    // Here, 'auto' is used to simplify the iterator declaration.
    // This is a feature introduced in C++11 and later versions.
    cout << "Using Traditional Iterator:\n";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
