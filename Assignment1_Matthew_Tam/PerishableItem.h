#ifndef PERISHABLEITEM_H
#define PERISHABLEITEM_H

#include "Item.h"

class PerishableItem : public Item
{
	string expirationDate;

public:
	PerishableItem(int id, string name, int quantity, double price, string expirationDate);
	string getExpirationDate();
};

#endif