#include <iostream>
#include <cmath>

using namespace std;

void talk() {                                       // User - created function.

    string name;

    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Hello there, " << name << endl;        // Gets users name and greets them.
}

int main()                                          // Main function.
{   
    talk();                                         // Calling the "talk()" function.
    return 0;
}

/* Everything is outputted, despite the fact that it is not in the main funciton. The talk function is called and the code within it is executed. */
