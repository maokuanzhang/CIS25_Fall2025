#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;
};

// Function to search for an item by name and display its quantity
void searchItem(Item items[], int size, string searchName) 
{
	// Flag to indicate if the item was found
    bool found = false;

	// Loop through the items to find the matching name
    for (int i = 0; i < size; i++) 
    {
		// Compare item name with the search name
        if (items[i].name == searchName) 
        {
            cout << "Item found: " << items[i].name << endl;
            cout << "Quantity: " << items[i].quantity << endl;
            found = true;
            break;
        }
    }

	// If item was not found, display a message
    if (!found) 
    {
        cout << "Item not found in inventory." << endl;
    }
}

int main() 
{
    // Create an array of Item objects
    const int SIZE = 5;
    Item items[SIZE];

    cout << "===== Inventory Management System =====" << endl;

    // Ask the user to enter the name and quantity for each item
    for (int i = 0; i < SIZE; i++) 
    {
        cout << "\nEnter name for item " << (i + 1) << ": ";
        cin >> items[i].name;
        cout << "Enter quantity for " << items[i].name << ": ";
        cin >> items[i].quantity;
    }

    // Display all items in the inventory using a loop
    cout << "\n===== Inventory List =====" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << i + 1 << ". " << items[i].name << " - Quantity: " << items[i].quantity << endl;
    }

	// Search for an item by name and display its quantity
    string searchName;
	// Loop to allow multiple searches
    while (true) 
    {
        cout << "\nEnter item name to search (or type 'exit' to quit): ";
        cin >> searchName;

        if (searchName == "exit" || searchName == "Exit") 
        {
            cout << "\nExiting search. Program finished successfully." << endl;
            break;
        }

		// Call the search function
        searchItem(items, SIZE, searchName);
    }

    return 0;
}
