/*
    Module 12: Working with External Data in C++
    The Public Dataset: pokemon_stats.csv (from Kaggle.com)

    This program demonstrates:
    - File input from a real-world dataset (.csv file)
    - Using a class to load data
    - Extracting and using 5 fields from each row
    - Printing the first 10 entries in a readable format
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// Create a class to store Pokemon data (at least 5 fields)
class Pokemon {
public:
    string name;
    string type1;
    int hp;
    int attack;
    int defense;

    // Constructor assigns values after reading from CSV
    Pokemon(string n, string t1, int h, int a, int d) 
    {
        name = n;
        type1 = t1;
        hp = h;
        attack = a;
        defense = d;
    }

    // Displays one Pok¨¦mon in readable format
    void display() 
    {
        cout << "Name: " << name << " | Type: " << type1 << " | HP: " << hp << " | Attack: " << attack << " | Defense: " << defense << endl;
    }
};

int main() 
{

    // Open and Read the dataset(CSV file) 
    ifstream file("pokemon_stats.csv");
	// Variable to hold each line read from the file
    string line;

    // Check if file was successfully opened
    if (!file.is_open()) 
    {
        cout << "Error: Could not open pokemon_stats.csv" << endl;
        return 1;
    }

	// Vector to store all loaded Pokemon objects
    vector<Pokemon> pokemons;

	// Read and ignore the header row
    getline(file, line); 

    // Read the file line-by-line
    while (getline(file, line)) 
    {
		// Use stringstream to parse each line
        stringstream pokemonData(line);

		// Variables to hold each field
        string id, name, type1, type2, hpStr, attackStr, defenseStr;

        // Extract each comma-separated value
        getline(pokemonData, id, ',');        // Column 1: id (not used)
        getline(pokemonData, name, ',');      // Column 2: name
        getline(pokemonData, type1, ',');     // Column 3: type_1
        getline(pokemonData, type2, ',');     // Column 4: type_2 (not used)
        getline(pokemonData, hpStr, ',');     // Column 5: hp
        getline(pokemonData, attackStr, ','); // Column 6: attack
        getline(pokemonData, defenseStr, ',');// Column 7: defense

        // Convert numeric strings into integers
        int hp = stoi(hpStr);
        int attack = stoi(attackStr);
        int defense = stoi(defenseStr);

        // Create a Pokemon object and save it in the vector
        pokemons.push_back(Pokemon(name, type1, hp, attack, defense));
    }

    // Display the first 10 Pok¨¦mon loaded from the dataset
    cout << "\nDisplaying first 10 Pokemon from the dataset:\n" << endl;
    
	// Loop to display up to 10 Pokemons
    for (int i = 0; i < 10 && i < pokemons.size(); i++) 
    {
        pokemons[i].display();
    }

    file.close(); // Close file when done
    return 0;
}
