#ifndef _UPGRADABLE_
#define _UPGRADABLE_

#include "property.h"
#include <memory>
#include <vector>

class Upgradable : public Property {
	int improvementCost;
	int tuition[6];
	int improvements = 0;
	std::shared_ptr<Player> owner = nullptr;
	std::vector<Property *> monopolyBlock;
public:
	Upgradable(std::string name, int c, int ic, int t0, int t1, int t2, int t3, int t4, int t5);
	int getImprovementCost();
	int getImprovements();
	int getTuition();
	void addToBlock(Property&);
	void playerEffect(Player&);
};

#endif

