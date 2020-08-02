#include <vector>
#include <string>
#include <memory>

class Residence;
class Building;
class Gym;

class Player {
	std::string name;
	char piece;
	int pos = 0;
	int money = 1500;
	std::vector<std::shared_ptr<Residence>> rez;
	std::vector<std::shared_ptr<Building>> buildings;
	std::vector<std::shared_ptr<Gym>> gyms;
	int cups = 0;
public:
	Player(std::string& name, char piece);
	std::string getName();
	char getPiece();
	int getPos();
	void setPos(int);
	int getMoney();
	void setMoney(int);
	std::vector<std::shared_ptr<Residence>> getRez();
	std::vector<std::shared_ptr<Building>> getBuildings();
	std::vector<std::shared_ptr<Gym>> getGyms();
	bool isBankrupt();
	int getCups();
	void addCup();
	void buyBuilding(Building&);
	void buyResidence(Residence&);
	void buyGym(Gym&);
};