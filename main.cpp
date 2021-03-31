#include <iostream>
#include <vector>

void print_array(const int data[], int size){     // Even though not passed by reference, arrays decay to pointers.
                                                 // Therefore, we use the const keyword to ensure that variable cannot be changed.
    for(int i = 0; i < size; i++){
            std::cout << data[i] << std::endl;
    }
}

int main(){

    int data[] = {1,2,3};
    print_array(data, 3);
    return 0;
}

/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int count){
    std::ifstream input("best_score.txt");

	if(!input.is_open()){
		std::cout << "Unable to read file!" << std::endl;
	}

	int best_score;
	input >> best_score;        // >> - input; << - output;

	std::ofstream output("best_score.txt");
	if(!output.is_open()){
		std::cout << "Unable to read file!" << std::endl;
	}

	if(count < best_score) {
	    output << count;
	} else {
	    output << best_score;
	}
}
void print_vector(std::vector<int> vector){   // Function outputs all guesses.
    for(int i = 0; i < vector.size(); i++){
	    std::cout << vector[i] << std::endl;
    }
}

int playgame(){
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 101;        		  // number between 0 and 100.
    std::cout << "Guess a number:" << std::endl;
    while(true){
        int guess;
	std::cin >> guess;
	count++;

        guesses.push_back(guess);

        if(guess == random){
	    std::cout << "That's correct!" << std::endl;
            break;
        } else if(guess < random){
	    std::cout << "Try a little bit higher!" << std::endl;
        } else {
	    std::cout << "Too high! Try a little lower!" << std::endl;
        }

        save_score(count);
    }

    print_vector(guesses);  // Displays all of the guesses made.
    return 0;
}

int main() {

    srand(time(NULL));          // seeds random number
    int choice;

    do {
    std::cout << "0. Quit" << std::endl << "1. Play Game\n";
    std::cin >> choice;

    switch(choice) {
    case 0:
	std::cout << "Game Over." << std::endl;
        return 0;
    case 1:
	std::cout << "Let's play" << std::endl;
        playgame();
        break;
    }

    } while (choice != 0);


    return 0;
}
*/