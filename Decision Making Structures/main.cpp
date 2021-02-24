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
        dayName = "Invalid argument.";
    }
    return dayName;
}

int main()
{
    cout << getDayOfWeek(8);
    return 0;
}
