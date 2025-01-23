#ifndef NONPERISHABLE_H
#define NONPERISHABLE_H

#include "Item.h"

class NonPerishableItem : public Item
{
	int warrentyPeriod;

public:
	NonPerishableItem(int id, string name, int quantity, double price, string warrentyPeriod);
	string getWarrentyPeriod();
};

#endif