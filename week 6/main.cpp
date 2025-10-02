#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Class to represent an item with name and quantity
class Item 
{
public:
    string name;
    int quantity = 0;

    // Save item to file
    void saveToFile() 
    {
		// Append to file
        ofstream file("items.txt"); 
        if (file.is_open()) 
        {
            file << name << "," << quantity << endl;
            file.close();
            cout << "Item saved to file" << endl;
        }
        else 
        {
            cout << "Unable to open file for writing." << endl;
        }
    }

	// Load items from file and display
    void loadFromFile() 
    {
		// Read from file
        ifstream file("items.txt");
        if (file.is_open()) 
        {
            string line;
            while (getline(file, line)) 
            {
                cout << "\nFile content: " << line << endl;
            }
            file.close();
        }
        else 
        {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() 
{
	// Create an item
    Item fruit;
    fruit.name = "Apple";
    fruit.quantity = 20;
    
	// Save item to file
    fruit.saveToFile();
	// Load item from file and display
    fruit.loadFromFile();

    return 0;
}


