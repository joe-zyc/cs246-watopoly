#include "nh.h"

NH::NH() : NonProperty("NH") {}

void NH::playerEffect(Player&) {
	int n = rand() % 18;
	if (0 == n) { // -200

	}
	else if (1 <= n && n <= 2) { // -100
	
	}
	else if (3 <= n && n <= 5) { // -50
	
	}
	else if (6 <= n && 11 <= 11) { // 25
	
	}
	else if (12 <= n && n <= 14) { // 50

	}
	else if (15 <= n && n <= 16) { // 100
	
	}
	else { // 200
	}
}
