#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;
    char op;                                    // Initialization

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter operator: " << endl;
    cin >> op;

    cout << "Enter second number: " << endl;
    cin >> num2;                                // Prompts user for input and stores it

    if(op == '-')
    {
        result = num1 - num2;
    } else if(op == '+')
    {
        result = num1 + num2;
    } else if(op == '*')
    {
        result = num1 * num2;
    } else if(op == '/')
    {
        result = num1 / num2;
    } else
    {
        cout << "Invalid Operator" << endl;
    }
    cout << result;                             // Determines the operator and proceeds accordingly.

    return 0;
}
