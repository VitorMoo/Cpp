#include <iostream>
using namespace std;

//In the pass-by-value method, the calling function sends
//a copy of its argument to the called function. The copy becomes the parameter in the called
//function.

// Pass-by-value
void doItByValue(int num) {
    // Changes the value of the local copy
    num = 20;
    cout << "Value inside doItByValue: " << num << endl;
}

//In the pass-by-reference method, the parameter is
//only a reference to the argument. The binding between the two occurs in the background as
//part of the running environment, as shown below:
//int& rNum = num,In pass-by-reference, the argument and the parameter are exactly the same object.

// Pass-by-reference
void doItByReference(int& rNum) {
    // Changes the value of the original variable
    rNum = 30;
    cout << "Value inside doItByReference: " << rNum << endl;
}

int main() {
    int num = 10;

    // Calling the function with pass-by-value
    cout << "Calling doItByValue:" << endl;
    doItByValue(num);
    cout << "Value of num after pass-by-value call: " << num << endl; // num remains unchanged

    // Calling the function with pass-by-reference
    cout << "\nCalling doItByReference:" << endl;
    doItByReference(num);
    cout << "Value of num after pass-by-reference call: " << num << endl; // num was changed inside the function

    return 0;
}
