#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i;

    int primeNum[] = {1, 3, 5, 7, 11};                          // Integer array


    for(i = 0; i < 5; i++) {
        cout << primeNum[i] << endl;
    }                                   // for loop iterates through every element and prints it out

    primeNum[3] = 13;                   // changing member at 3rd index

      for(i = 0; i < 5; i++) {
        cout << primeNum[i] << endl;
    }                                       // same as on line 13


    return 0;
}
