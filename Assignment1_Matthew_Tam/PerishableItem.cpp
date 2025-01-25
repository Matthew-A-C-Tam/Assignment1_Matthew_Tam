#include "PerishableItem.h"
#include <iostream>

using namespace std;

// Constructor
PerishableItem::PerishableItem(int id, string& name, int quantity, double price, string expirationDate) : Item(id, name, quantity, price)
{
	this->expirationDate = expirationDate;
}

//Getter
string PerishableItem::getExpirationDate() const
{
	return expirationDate;
}

//Setter
void PerishableItem::setExpirationDate(const string expirationDate)
{
	this->expirationDate = expirationDate;
}