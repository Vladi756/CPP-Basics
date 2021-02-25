#include <iostream>

using namespace std;

int main()
{
    int index = 6;

    do{                             // Hello is printed once even though index does not satisfy the condition.
        cout << "Hello!" << endl;   // The body is executed first, then the condition is checked.
        index++;
    } while(index <= 5);

    return 0;
}
