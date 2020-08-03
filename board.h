#ifndef _BOARD_
#define _BOARD_

#include <vector>
#include <memory>
#include "square.h"
#include "property.h"
#include "upgradable.h"
#include "residence.h"
#include "gym.h"

class Square;

class Board {
	std::vector<std::shared_ptr<Square>> squares;

public:
	void newBoard();
};

#endif
