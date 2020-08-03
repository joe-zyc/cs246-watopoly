#include "nonproperty.h"
#include "player.h"

class SLC : public NonProperty {
public:
	void playerEffect(Player&) override;
};
