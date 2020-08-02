#include "player.h"

Player::Player(std::string& name, char piece) {
	this->name = name;
	this->piece = piece;
}

std::string Player::getName() { return name; }

char Player::getPiece() { return piece; }

int Player::getPos() { return pos; }

void Player::setPos(int i) { pos = i; }

int Player::getMoney() { return money; }

void Player::setMoney(int i) { money = i; }

std::vector<std::shared_ptr<Residence>> Player::getRez() { return rez; }

std::vector<std::shared_ptr<Building>> Player::getBuildings() { return buildings; }

std::vector<std::shared_ptr<Gym>> Player::getGyms() { return gyms; }

bool Player::isBankrupt() { return money == 0; }

int Player::getCups() { return cups; }

void Player::addCup() { ++cups; }

void Player::buyBuilding(Building&) {

}

void Player::buyResidence(Residence&) {

}

void Player::buyGym(Gym&) {

}
