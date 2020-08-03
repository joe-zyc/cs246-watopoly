#include "nonproperty.h"

//NonProperty::NonProperty(std::string n, void(*playerEffect)(Player&)) : Square(n), f{ playerEffect } {}

NonProperty::NonProperty(std::string n) : Square(n) {}

void NonProperty::playerEffect(Player& p) {
	//f(p);
}
