#ifndef PERISHABLEITEM_H
#define PERISHABLEITEM_H

#include "Item.h"

class PerishableItem : public Item
{
	string expirationDate;

public:
	// Constructor
	PerishableItem(int id, string& name, int quantity, double price, string expirationDate);

	// Getter
	string getExpirationDate() const;

	// Setter
	void setExpirationDate(const string expirationDate);
};

#endif