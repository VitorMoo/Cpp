#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
rand() returns a integer between 0 and rand_max
which is defined in cstdlib, the srand() function sets a seed for rand()
*/

int main()
{

    int i, num;

    srand(time(NULL)); // initialize a random seed
    for (i = 0; i < 5; i++)
    {
        num = rand() % 100;
        cout << num << '\n';
    }

    return 0;
}
