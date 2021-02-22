#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    bool isMale = true;
    bool isTall = false;                    // Boolean variables upon which the output of the program depends on.

    if(isMale && isTall) {                             // If statement checks condition - the truth of the isMale variable
        cout << "You are a tall male." << endl;        // When isMale and isTall are both T
    }else if(isMale) {
        cout << "You are a male." << endl;             // isMale T; isTall F;
    }else if(isTall) {
        cout << "You are a tall female." << endl;      // isMalt F; isTall T;
    }else {
        cout << "You are a female." << endl;           // isMale F; isTall F;
    }
}
