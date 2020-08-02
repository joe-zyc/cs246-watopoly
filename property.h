#include <memory>

class Player;

class Property {
	int cost;
	std::shared_ptr<Player> owner;
public:
	int getCost();
	std::shared_ptr<Player> getOwner();
	void setOwner(Player&);

};
