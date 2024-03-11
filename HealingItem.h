#ifndef HEALINGITEM_H
#define HEALINGITEM_H

#include "Item.h"

class HealingItem : public Item
{
private:
	// number of health points recovered by the item
	unsigned int itemHealingPoints;

public:
	// copy constructor
	HealingItem(const HealingItem& aOriginalHealingItem);
	// default constructor
	HealingItem();
	// parameterized constructor
};



#endif