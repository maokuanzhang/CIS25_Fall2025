#include <iostream>
#include "Model5.h" // Include the header file for function declarations

using namespace std;


int main() 
{
	// Variable to store user's option
    int option = 0;

	// Keep Looping until the user option to exit
    while (option != 4) {

		// Display the simple menu description
        showMenu();
        cout << "Enter your option: ";
        cin >> option;

		// Perform actions based on user option and call the corresponding functions
        if (option == 1) 
        {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Result: " << add(x, y);
        }

        else if (option == 2) 
        {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Result: " << multiply(x, y);
        }

        else if (option == 3) 
        {
            int x;
            cout << "Enter a number: ";
            cin >> x;
            cout << "Result: " << square(x);
        }

        else if (option == 4) 
        {
            cout << "Exiting...";
        }

        else 
        {
            cout << "Invalid option! Please try again.\n";
        }
    }

    return 0;
}

// Function to display the menu
void showMenu() 
{
    cout << "\n===== Simple Menu =====\n";
    cout << "1. Add two numbers\n";
    cout << "2. Multiply two numbers\n";
    cout << "3. Square a number\n";
    cout << "4. Exit\n";
}

// Function to add two numbers
int add(int a, int b)
{
    return a + b; 
}

// Function to multiply two numbers
int multiply(int a, int b) 
{ 
    return a * b; 
}

// Function to square a number
int square(int a) 
{ 
    return a * a; 
}
