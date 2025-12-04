# Week 15

## Author
Name: Maokuan Zhang<br>
Course: CIS25 Fall2025<br>
Assignment: week 15

### File Description
Week 15.cpp - source file that defines a `Product` class with private attributes, demonstrates the constructor and destructor, and prints product details to show object lifecycle behavior in C++.<br>


### Program Description
This program proves the use of:<br>
1.Classes – Defines a class `Product` with private attributes (`id`, `name`, `price`) to enforce data encapsulation;<br>
2.Constructor – Initializes an object’s attributes when the object is created and prints a confirmation message;<br>
3.Destructor – Automatically runs when an object goes out of scope and prints a message to indicate cleanup;<br>
4.Member Function – Implements the method `printDetails()` to display a product’s information to the user.

### Program Function
The program performs the following functions:<br>
1.Defines a class named `Product` with three private members: `id` (int), `name` (string), and `price` (float);<br>
2.Implements a constructor that initializes these attributes using a member initializer list and prints `"Constructor called"`;<br>
3.Implements a destructor that prints `"Destructor called"` when the object is destroyed;<br>
4.Implements a member function `printDetails()` to display the product’s ID, name, and price;<br>
5.In `main()`, creates a `Product` object with user-chosen values (`1001`, `"Wireless Mouse"`, `19.99`) and calls `printDetails()` for verification


This program creates and destroys a Product object (ID 1001, Name Wireless Mouse, Price $19.99), using a constructor and destructor to demonstrate the object lifecycle in C++.
