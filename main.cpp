#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include "lib.h"

//void clear() {std::cout << "\033[2J\033[H\n";}
void clear() {}

template <typename T>
T input(const std::string& prompt, const std::string errorMsg = "invalid input",const uint8_t afterFail = 0) {
	T var;
	std::cout << prompt;
	std::cin >> var;
    while(std::cin.fail()) // incorrect user input
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX,'\n');
		std::cout << errorMsg;
		switch (afterFail) {
			case 0:
				getchar();
			case 1:
				sleep(1);
		}
        std::cout << prompt;
        std::cin >> var;
    }
	return var;
}

struct gameDetails {
	uint8_t players;
	bool playWithPot;
	bool freeParkingGetsPot;
	bool landOnGoGet400;
};

gameDetails thisGame {0,false,false,false};

int main(int argc, char *argv[]) {
	//print bools as true and false
	std::cout.setf(std::ios::boolalpha);
	bool start = true;
	//START LOOP
	while (start) {
		clear();
		uint8_t choice = input<short>("C++ MONOPOLY\n\n1. start\n2. game settings\n\n>");
		//std::cout << "input passed, returned "<<choice<<"\n";
		clear();
		switch (choice) {
			case 1: //start
				start = false;
				break;
			case 2: //game settings
				uint8_t choice2 = input<short>("GAME SETTINGS:\n1. taxes go to \"pot\"       - " 
						  + std::to_string(thisGame.playWithPot)
						  + "\n2. free parking gets \"pot\" - " 
						  + std::to_string(thisGame.freeParkingGetsPot)
						  + "\n3. $400 if landed on go    - " 
						  + std::to_string(thisGame.landOnGoGet400)
						  + "\n4. main menu\n\nEnter a number to edit\n> ");
		}
	}
	return 0;
}