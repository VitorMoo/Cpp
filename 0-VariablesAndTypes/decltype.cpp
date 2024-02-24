#include <iostream>
#include <vector>
 using namespace std;
// Function to create and return a vector
    vector<int> createVector() {
    return {1, 2, 3, 4, 5};
}

int main() {

    // Create the original vector
    auto originalVector = createVector();

    // Define a new vector with the same type as originalVector using decltype
    decltype(originalVector) processedVector;

    // Process the vector in some way
    for (const auto& elem : originalVector) {
        processedVector.push_back(elem * 2);
    }

    // Print the original vector
    cout << "Original vector: ";
    for (const auto& elem : originalVector) {
        cout << elem << " ";
    }
    cout << endl;

    // Print the processed vector
    cout << "Processed vector: ";
    for (const auto& elem : processedVector) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
