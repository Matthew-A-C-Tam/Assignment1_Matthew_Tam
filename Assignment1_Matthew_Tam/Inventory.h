#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>

class Inventory
{
	vector<Item*> items;
	int capacity;
	int itemCount;

public:
	// Constructor
	Inventory(int capacity);

	// Add item to inventory
	void addItem(Item* item);

	// Remove item from inventory
	void removeItem(int id);

	// Display all items in inventory
	void displayAllItems();

	// Save inventory to file
	void saveToFile(string& filename);

	// Load inventory from file
	void loadFromFile(string& filename);

	// Destructor
	~Inventory();
};

#endif
