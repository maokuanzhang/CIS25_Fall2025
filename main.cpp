// main.cpp
// Author: Maokuan Zhang
// Course: CIS25 Fall 2025
// Assignment: Week 3
// Description: Main file for Module 3

#include "shopping.h" // This header file contains header files needed 

using namespace std;

int main() {

	// Declare variables to hold the user input
    string itemName;
    int quantity;
    double cost;

	// Prompt and read item name (getline can allow space in the input)
    cout << "Enter item name: ";
    getline(cin, itemName);  

	// Prompt and read quantity and cost
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter cost: ";
    cin >> cost;

	// Calculate total cost
    double totalCost = quantity * cost;

    cout << "Total cost for " << itemName << ": $" << totalCost << endl;

    return 0;
}
