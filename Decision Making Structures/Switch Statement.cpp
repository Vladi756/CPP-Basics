#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) // Converts number into corresponding day of week.
{
    string dayName;
    switch(dayNum)              // Switch statement
    {
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    case 7:
        dayName = "Sunday";
        break;
    default:
        dayName = "Invalid argument.";  // In case the user's input isn't between 1 and 7.
    }
    return dayName;
}

int main()
{
    cout << getDayOfWeek(6);        // Printing output, which would be "Saturday"
    return 0;
}
