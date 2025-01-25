#ifndef NONPERISHABLE_H
#define NONPERISHABLE_H

#include "Item.h"

class NonPerishableItem : public Item
{
	int warrantyPeriod;

public:
	// Constructor
	NonPerishableItem(int id, string& name, int quantity, double price, int warrantyPeriod);

	// Getter
	int getWarrantyPeriod() const;

	// Setter
	void setWarrantyPeriod(int warrantyPeriod);
};

#endif