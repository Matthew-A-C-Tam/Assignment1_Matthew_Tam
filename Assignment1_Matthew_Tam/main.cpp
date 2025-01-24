#include <iostream>
#include "Item.h"
#include "PerishableItem.h"
#include "NonPerishableItem.h"
#include "Inventory.h"

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\n=== Inventory Menu ===" << endl;
    cout << "1. Add Item" << endl;
    cout << "2. Remove Item" << endl;
    cout << "3. Display All Items" << endl;
    cout << "4. Save Inventory to File" << endl;
    cout << "5. Load Inventory from File" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    cout << "Welcome to the Inventory Program!" << endl;

    // Inventory capacity
    Inventory inventory(20);

    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        // Checks user input if valid
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number between 1 and 6." << endl;
            continue;
        }

        switch (choice) {
        case 1: {
            // Add Item
            int id, quantity, type;
            double price;
            string name, expirationDate;
            int warrantyPeriod;

            cout << "Enter Item ID: ";
            cin >> id;
            cout << "Enter Item Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Quantity: ";
            cin >> quantity;
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter 1 for Perishable, 2 for Non-Perishable: ";
            cin >> type;

			// Checks user input if valid
            if (type == 1) {
                cout << "Enter Expiration Date: ";
                cin.ignore();
                getline(cin, expirationDate);
                inventory.addItem(PerishableItem(id, name, quantity, price, expirationDate));
            }
            else if (type == 2) {
                cout << "Enter Warranty Period (in months): ";
                cin >> warrantyPeriod;
                inventory.addItem(NonPerishableItem(id, name, quantity, price, warrantyPeriod));
            }
            else {
                cout << "Invalid item type!" << endl;
            }
            break;
        }
        case 2: {
            // Remove Item
            int id;
            cout << "Enter the ID of the item to remove: ";
            cin >> id;
            inventory.removeItem(id);
            break;
        }
        case 3:
            // Display All Items
            inventory.displayAllItems();
            break;
        case 4: {
            // Save to File
            string filename;
            cout << "Enter filename to save inventory: ";
            cin >> filename;
            inventory.saveToFile(filename);
            break;
        }
        case 5: {
            // Load from File
            string filename;
            cout << "Enter filename to load inventory: ";
            cin >> filename;
            inventory.loadFromFile(filename);
            break;
        }
        case 6:
            // Exit
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 6." << endl;
        }
    }

    return 0;
}