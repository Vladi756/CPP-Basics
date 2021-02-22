#include <iostream>
#include <cmath>

using namespace std;

double cube(double num);            // String prototype used to let the main function know

int main()
{
    double answer = cube(3);        // Gives control to function when called.
    cout << answer << endl;

    return 0;
}

double cube(double num) {
    return = num * num * num;       // The return keyword signifies the end of the function, returns control to main function
}
