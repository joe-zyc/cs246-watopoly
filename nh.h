#include "nonproperty.h"

class NH : public NonProperty {
public:
	NH();
	void playerEffect(Player&) override;
};
