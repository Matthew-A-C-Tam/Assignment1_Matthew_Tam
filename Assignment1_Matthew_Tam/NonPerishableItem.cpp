#include "NonPerishableItem.h"
#include <iostream>

using namespace std;

// Constructor
NonPerishableItem::NonPerishableItem(int id, string& name, int quantity, double price, int warrantyPeriod) : Item(id, name, quantity, price)
{
	this->warrantyPeriod = warrantyPeriod;
}

// Getter
int NonPerishableItem::getWarrantyPeriod() const
{
	return warrantyPeriod;
}

// Setter
void NonPerishableItem::setWarrantyPeriod(int warrantyPeriod)
{
	this->warrantyPeriod = warrantyPeriod;
}