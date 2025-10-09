#include <iostream>
#include <string>
using namespace std;

// Define a struct named Item with two members: name (string) and id (int)
struct Item 
{
    string name;
    int id;
};

// Implement a binary search function to find an Item by id
int binarySearchById(Item* arr, int n, int targetId) 
{
    int low = 0;
    int high = n - 1;
    while (low <= high) 
    {
        int middle = low + (high - low) / 2;

        if (arr[middle].id == targetId)
            return middle;
        else if (arr[middle].id < targetId)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}

int main() 
{
    int n = 100;

	// Dynamically allocate an array of Item structs
    Item* inventory = new Item[n];

	// Populate the array with names "Item_001", "Item_002", ..., "Item_100" and IDs 1, 2, ..., 100
    for (int i = 0; i < n; ++i) 
    {
        // Name-sort by name
        inventory[i].id = i + 1;
		
        string numStr;
        if (i + 1 < 10)
            numStr = "00" + to_string(i + 1);
        else if (i + 1 < 100)
            numStr = "0" + to_string(i + 1);
        else
            numStr = to_string(i + 1);

        inventory[i].name = "Item_" + numStr;
    }

    cout << "\nInventory created successfully!";

	// Prompt the user to enter an ID to search for
    int targetId;
    cout << "\nEnter an ID to search for (1¨C100): ";
    cin >> targetId;

	// Perform binary search to find the item with the specified ID
    int index = binarySearchById(inventory, n, targetId);

	// Display the result of the search
    if (index != -1) 
    {
        cout << "\nItem found!\n" << "Name: " << inventory[index].name << " | ID: " << inventory[index].id << endl;
    }
    else 
    {
        cout << "\nItem with ID " << targetId << " not found.";
    }

    delete[] inventory;
    return 0;
}
