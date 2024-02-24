#include <iostream>
#include <string>

using namespace std;

int main() {
    // Example 1: Extracting a substring
    string sentence = "The quick brown fox jumps over the lazy dog.";
    string substring = sentence.substr(10, 5); // Extract "brown"
    cout << "Substring: " << substring << endl; // Output: "brown"

    // Example 2: Replacing a substring
    string text = "I like to eat apples.";
    text.replace(10, 3, "love"); // Replace "like" with "love"
    cout << "Modified text: " << text << endl; // Output: "I love to eat apples."

    // Example 3: Finding a word
    string phrase = "She sells seashells by the seashore.";
    string word_to_find = "seashells";
    size_t position = phrase.find(word_to_find);
    if (position != string::npos) {
        cout << "The word '" << word_to_find << "' was found at position: " << position << endl;
    } else {
        cout << "The word '" << word_to_find << "' was not found." << endl;
    }

    return 0;
}
    
