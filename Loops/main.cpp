#include <iostream>

using namespace std;

int main()
{
    int secretNum  = 7;
    int guess, i = 0; // i = guess count

    do {
        cout << "Guess a number I'm thinking of (1 to 10): " << endl;
        cin >> guess;
        i++;
    }while(guess != secretNum && i < 3);

    if(guess == secretNum) {
       cout << "Good Job!";
    } else {
        cout << "No more guesses for you!";
    }
    return 0;
}
