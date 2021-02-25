#include <iostream>

using namespace std;

int main()
{
    int numbers[7] = {21, 35, 76, 12, 109, 90, 34}; // Array
    int i;

    for(i = 0; i < 7; i++) {            // For loop iterates through array
        cout << numbers[i] << endl;     // Prints element at ith position (i.e. every element)
    }

    return 0;
}
