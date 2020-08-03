#include <vector>
#include <iostream>
#include "player.h"
#include "board.h"

int main() {

	// PLAYER INITIALIZATION //////////////////////////////////////

	int playersnum = 0;
	std::vector<std::shared_ptr<Player>> players;
	std::cout << "Please enter the number of players: ";
	std::cin >> playersnum;
	while (playersnum < 2) {
		std::cout << "Error: number of players must be greater than 2\nPlease enter the number of players: ";
		std::cin >> playersnum;
	}
	std::string name;
	char c;
	for (int i = 1; i <= playersnum; ++i) {
		std::cout << "Player" << i << ", please enter your name: ";
		std::cin >> name;
		std::cout << "Player" << i << ", please enter your character: ";
		std::cin >> c;
		players.emplace_back(new Player(name, c));
	}

	// BOARD INITIALIZATION ///////////////////////////////////////

	Board b(players);

	// GAMEPLAY ////////////////////////////////

	int currPlayer = 0;
	while (playersnum > 1) {
		std::cout << "It is " << players[currPlayer]->getName() << "'s turn";
		std::string arg;
		if (arg == "roll") {
			int roll = rand() % 6 + 1 + rand() % 6 + 1;

		}
	}
}