#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age;
    string name;
    cout << "Enter your age, and name please: " << endl;          // Prompts user for age and name
    cin >> age;
    getline(cin, name);                                           // Stores both of the users input
    cout << "Hello " << name << ", you are " << age << " years old!";       // Prints out the user input

    return 0;
}
