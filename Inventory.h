#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#include<vector>
#include"Item.h"

using std::vector;

class Inventory
{
private:
	// maximum number of items in inventory
	unsigned short int maxNumberOfItems = 10;
	// vector containing all items
	vector<Item>inventoryVector;

public:
	// copy constructor
};


#endif