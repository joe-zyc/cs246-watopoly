#ifndef _BOARD_
#define _BOARD_

#include <vector>
#include <memory>
#include <iostream>
#include "square.h"
#include "property.h"
#include "upgradable.h"
#include "residence.h"
#include "gym.h"
#include "slc.h"
#include "nh.h"
#include "osap.h"
#include "tuition.h"
#include "timsline.h"
#include "goosenesting.h"
#include "gototims.h"
#include "coopfee.h"

class Square;

class Board {
	std::vector<std::shared_ptr<Square>> squares;
	std::vector<std::shared_ptr<Player>> players;
	int currplayer = 0;
	int numplayers;
public:
	Board(std::vector<std::shared_ptr<Player>>);
	void roll(); // currplayer rolls dice, moves squares, and as the effect of the square applied on them
	void auction(Property&);
	std::string peek(int); // returns the name of the square at i
	std::shared_ptr<Square> getSquare(int i);

};

std::ostream& operator<<(std::ostream& o, Board& b);

std::istream& operator>>(std::istream& i, Board& b);

#endif
