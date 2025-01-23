#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>

class Inventory
{
	vector<Item> items;
	int capacity;
	int itemCount;

public:
	Inventory(int capacity);
	void addItem(Item item);
	void removeItem(int id);
	void displayAllItems();
	void saveToFile(string filename);
	void loadFromFile(string filename);
};

#endif
