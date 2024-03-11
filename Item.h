#ifndef ITEM_H
#define ITEM_H

#include<iostream>
#include<string>

using std::string;

class Item
{
private:
	// item name
	string itemName;
	// item description (text)
	string itemDescription;
	// item ID (unique number identifier)
	unsigned int itemID;

public:
	// copy constructor
	Item(const Item& aItem);
	// default constructor
	Item();
	// parameterized constructor
	Item(string, string, unsigned int);

	// GETTERS & SETTERS
	string getItemName() const;
	void setItemName(string aNewItemName);

	string getItemDescription() const;
	void setItemDescription(string aNewItemDescription);

	unsigned int getItemID() const;
	void setItemID(unsigned int aNewItemID);
	
	// ITEM FUNCTIONS
	// display item stats
	void displayItemStats(Item) const;
};



#endif