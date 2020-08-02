#include <vector>
#include <iostream>
#include "player.h"

int main() {

	int players = 0;
	std::vector<Player> players;
	std::cout << "Please enter the number of players: ";
	std::cin >> players;
	while (players < 2) {
		std::cout << "Error: number of players must be greater than 2\nPlease enter the number of players: ";
		std::cin >> players;
	}
	std::string name;
	char c;
	for (int i = 1; i <= players; ++i) {
		std::cout << "Player" << i << ", please enter your name: ";
		std::cin >> name;
		std::cout << "Player" << i << ", please enter your character: ";
		std::cin >> c;
		players.emplace_back(name, c);
	}

	int currPlayer = 0;
	while (players > 1) {
		std::string arg;
		if (arg == "roll") {
			int roll = rand() % 6 + 1 + rand() % 6 + 1;

		}
	}
}