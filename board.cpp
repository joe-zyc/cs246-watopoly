#include "board.h"
#include <string>

Board::Board(std::vector<std::shared_ptr<Player>> p) {
	players = p;
	numplayers = p.size();
	squares.emplace_back(nullptr); // 0, OSAP
	squares.emplace_back(new Upgradable("AL", 40, 50, 2, 10, 30, 90, 160, 250)); // 1
	squares.emplace_back(new SLC(*this)); // 2, SLC
	squares.emplace_back(new Upgradable("ML", 60, 50, 4, 20, 60, 180, 320, 450)); // 3
	squares.emplace_back(nullptr); // 4, Tuition
	squares.emplace_back(new Residence("MKV")); // 5
	squares.emplace_back(new Upgradable("ECH", 100, 50, 6, 30, 90, 270, 400, 550)); //6
	squares.emplace_back(nullptr); // 7, NH
	squares.emplace_back(new Upgradable("PAS", 100, 50, 6, 30, 90, 270, 400, 550)); // 8
	squares.emplace_back(new Upgradable("HH", 120, 50, 8, 40, 100, 300, 450, 600)); // 9
	squares.emplace_back(nullptr); // 10, Tims line
	squares.emplace_back(new Upgradable("RCH", 140, 100, 10, 50, 150, 450, 625, 750)); // 11
	squares.emplace_back(new Gym("PAC")); // 12
	squares.emplace_back(new Upgradable("DWE", 140, 100, 10, 50, 150, 450, 625, 750)); // 13
	squares.emplace_back(new Upgradable("CPH", 160, 100, 12, 60, 180, 500, 700, 900)); // 14
	squares.emplace_back(new Residence("UWP")); // 15
	squares.emplace_back(new Upgradable("LHI", 180, 100, 14, 70, 200, 550, 750, 950)); // 16
	squares.emplace_back(new SLC(*this)); // 17, SLC
	squares.emplace_back(new Upgradable("BMH", 180, 100, 14, 70, 200, 550, 750, 950)); // 18
	squares.emplace_back(new Upgradable("OPT", 200, 100, 16, 80, 220, 600, 800, 1000)); // 19
	squares.emplace_back(nullptr); // 20, Goose nesting
	squares.emplace_back(new Upgradable("EV1", 220, 150, 18, 90, 250, 700, 875, 1050)); // 21
	squares.emplace_back(nullptr); // 22, NH
	squares.emplace_back(new Upgradable("EV2", 220, 150, 18, 90, 250, 700, 875, 1050)); // 23
	squares.emplace_back(new Upgradable("EV3", 240, 150, 20, 100, 300, 750, 925, 1100)); // 24
	squares.emplace_back(new Residence("V1")); // 25
	squares.emplace_back(new Upgradable("PHYS", 260, 150, 22, 110, 330, 800, 975, 1150)); // 26
	squares.emplace_back(new Upgradable("B1", 260, 150, 22, 110, 330, 800, 975, 1150)); // 27
	squares.emplace_back(new Gym("CIF")); // 28
	squares.emplace_back(new Upgradable("B2", 280, 150, 24, 120, 360, 850, 1025, 1200)); // 29
	squares.emplace_back(nullptr); // 30, Go to tims
	squares.emplace_back(new Upgradable("EIT", 300, 200, 26, 130, 390, 900, 1100, 1275)); // 31
	squares.emplace_back(new Upgradable("ESC", 300, 200, 26, 130, 390, 900, 1100, 1275)); // 32
	squares.emplace_back(new SLC(*this)); // 33, SLC
	squares.emplace_back(new Upgradable("C2", 350, 200, 28, 150, 450, 1000, 1200, 1400)); // 34
	squares.emplace_back(new Residence("REV")); //35
	squares.emplace_back(nullptr); //36, NH
	squares.emplace_back(new Upgradable("MC", 350, 200, 35, 175, 500, 1100, 1300, 1500)); // 37
	squares.emplace_back(nullptr); // 38, coop fee
	squares.emplace_back(new Upgradable("DC", 400, 200, 50, 200, 600, 1400, 1700, 2000)); // 39
}

void Board::roll() {

}

std::string Board::peek(int i) {
	return squares[i]->getName();
}

std::shared_ptr<Square> Board::getSquare(int i) {
	return squares[i];
}
