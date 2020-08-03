#ifndef _NONPROPERTY_
#define _NONPROPERTY_

#include <string>
#include "square.h"

class NonProperty : public Square {
	static void (*f)(Player&);
public:
	/*NonProperty(std::string n, void (*playerEffect)(Player&));
	void playerEffect(Player&);*/
};

#endif
