#include "Inventory.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor
Inventory::Inventory(int capacity)
{
	this->capacity = capacity;
	this->itemCount = 0;
}

// Add item to inventory
void Inventory::addItem(Item item)
{
	if (itemCount < capacity)
	{
		items.push_back(item);
		itemCount++;
		cout << "Item added to inventory." << endl;
	}
	else
	{
		cout << "Inventory is full." << endl;
	}
}

// Remove item from inventory
void Inventory::removeItem(int id)
{
	for (int i = 0; i < itemCount; i++)
	{
		if (items[i].getID() == id)
		{
			items.erase(items.begin() + i);
			itemCount--;
			cout << "Item removed from inventory." << endl;
			return;
		}
	}
	cout << "Item not found in inventory." << endl;
}

// Display all items in inventory
void Inventory::displayAllItems()
{
	if (itemCount == 0)
	{
		cout << "Inventory is empty." << endl;
	}
	else
	{
		for (int i = 0; i < itemCount; i++)
		{
			items[i].display();
		}
	}
}

// Save inventory to file
void Inventory::saveToFile(string filename) {
	ofstream outFile(filename);
	if (!outFile) {
		cout << "Error opening file for writing!" << endl;
		return;
	}

	for (const auto& item : items) {
		outFile << item.getID() << " "
			<< item.getName() << " "
			<< item.getQuantity() << " "
			<< item.getPrice() << endl;
	}

	outFile.close();
	cout << "Inventory saved to file successfully!" << endl;
}

// Load inventory from file
void Inventory::loadFromFile(string filename) {
	ifstream inFile(filename);
	if (!inFile) {
		cout << "Error opening file for reading!" << endl;
		return;
	}
	items.clear();
	itemCount = 0;
	int id, quantity;
	string name;
	double price;
	while (inFile >> id >> name >> quantity >> price) {
		Item item(id, name, quantity, price);
		items.push_back(item);
		itemCount++;
	}
	inFile.close();
	cout << "Inventory loaded from file successfully!" << endl;
}
