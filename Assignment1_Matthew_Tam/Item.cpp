#include "Item.h"
#include <iostream>

using namespace std;

// Constructor
Item::Item(int id, string name, int quantity, double price)
{
	this->id = id;
	this->name = name;
	this->quantity = quantity;
	this->price = price;
}

//Getters
int Item::getID() const
{
	return id;
}

string Item::getName() const
{
	return name;
}

int Item::getQuantity() const
{
	return quantity;
}

double Item::getPrice() const
{
	return price;
}

//Setters
void Item::setName(const string name)
{
	this->name = name;
}

void Item::setQuantity(const int quantity)
{
	this->quantity = quantity;
}

void Item::setPrice(const double price)
{
	this->price = price;
}

//Display
void Item::display()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Price: $" << price << endl;
}