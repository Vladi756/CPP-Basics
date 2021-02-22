#include <iostream>
#include <cmath>

using namespace std;

void talk() {

    string name;

    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Hello there, " << name << endl;
}

int main()
{
    talk();
    return 0;
}
