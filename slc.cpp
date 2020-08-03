#include "slc.h"
#include <random>
#include <iostream>


void SLC::playerEffect(Player& p) {
	int n = rand() % 24;
	if (0 <= n && n <= 2) { // back 3
		p.setPos(p.getPos() - 3);
		std::cout << "You have been moves 3 spaces back!\nYou are now on ";
	}
	else if (3 <= n && n <= 6) { // back 2

	}
	else if (7 <= n && n <= 10) { // back 1

	}
	else if (11 <= n && n <= 13) { // forward 1

	}
	else if (14 <= n && n <= 17) { // forward 2

	}
	else if (18 <= n && n <= 21) { // forward 3
	
	}
	else if (n == 22) { // go to tim's line

	}
	else { // collect osap

	}
}
