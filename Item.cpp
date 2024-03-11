#include <iostream>
#include "Item.h"

using std::cout;
using std::endl;

// ITEM CLASS DEFINITIONS
// copy constructor
Item::Item(const Item& aOriginalItem) :
	itemName(aOriginalItem.itemName),
	itemDescription(aOriginalItem.itemDescription),
	itemID(aOriginalItem.itemID) { };
// default constructor
Item::Item()
{
	itemName = "defaultItemName";
	itemDescription = "defaultItemDescription";
	itemID = 0;
};
// parameterized constructor
Item::Item(string aItemName, string aItemDescription, unsigned int aItemID)
	: itemName(aItemName), itemDescription(aItemDescription), itemID(aItemID) { };

// GETTERS & SETTERS
string Item::getItemName() const { return this->itemName; }
void Item::setItemName(string aNewItemName) { this->itemName = aNewItemName; }

string Item::getItemDescription() const { return this->itemDescription; }
void Item::setItemDescription(string aNewItemDescription) { this->itemDescription = aNewItemDescription; }

unsigned int Item::getItemID() const { return this->itemID; }
void Item::setItemID(unsigned int aNewItemID) { this->itemID = aNewItemID; }

// ITEM FUNCTIONS
void Item::displayItemStats(Item aItem) const
{
	cout << "Item Name : " << aItem.getItemName() << endl;
	cout << "Item Description : " << aItem.getItemDescription() << endl;
	cout << "Item ID : " << aItem.getItemID() << endl;
}

