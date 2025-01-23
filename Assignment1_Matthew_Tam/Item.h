#ifndef ITEM_H
#define ITEM_H

using namespace std;
#include <string>

class Item
{
public:
	int id;
	string name;
	int quantity;
	double price;

public:
	Item(int id, string name, int quantity, double price);
	int getID();
	string getName();
	int getQuantity();
	double getPrice();
};

#endif