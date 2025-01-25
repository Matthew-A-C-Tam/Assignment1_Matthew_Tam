#ifndef ITEM_H
#define ITEM_H

using namespace std;
#include <string>

class Item
{
protected:
	int id;
	string name;
	int quantity;
	double price;

public:
	// Constructor
	Item(int id, string& name, int quantity, double price);

	// Getters
	int getID() const;
	string getName() const;
	int getQuantity() const;
	double getPrice() const;

	// Setters
	void setName(const string& name);
	void setQuantity(const int quantity);
	void setPrice(const double price);

	// Display
	virtual void display() const;

	// Destructor
	virtual ~Item();
};

#endif