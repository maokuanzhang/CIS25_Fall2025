# Week 15

## Author
Name: Maokuan Zhang<br>
Course: CIS25 Fall2025<br>
Assignment: week 15

### File Description
Module 12.cpp - source file that reads a Pokemon dataset from a CSV file downloaded from Kaggle.com, extracts 5 selected fields, stores them in a class, and displays the first 10 entries in a readable format using C++.<br>

### Dataset Information
Dataset File: pokemon_stats.csv<br>
Source: Kaggle Public Dataset<br>
Dataset Link: https://www.kaggle.com/datasets/sharmagayatri/pokemon-stats-csv <br>
The CSV file must be placed in the same directory as the .cpp file before execution.<br>

### Program Description
This program proves the use of:<br>
1.File Input – Reads data from an external .csv file using ifstream;<br>
2.String Processing – Uses stringstream to parse comma-separated values;<br>
3.Classe – Stores Pokemon information in a C++ class with 5 attributes;<br>
4.Vectors – Dynamically stores multiple objects using vector<Pokemon>;<br>
5.Readable Output – Displays the first 10 Pokémon entries in a clear and organized format.

### Program Function
The program performs the following functions:<br>
1.Opens a .csv dataset file named pokemon_stats.csv using ifstream;<br>
2.Reads and skips the header row of the file;<br>
3.Extracts the selected 5 fields from each Pokémon entry;<br>
4.Converts numeric values from strings to integers using stoi();<br>
5.Creates a Pokemon object for each entry and stores it inside a vector;<br>
6.Displays the first 10 Pokémon data objects using the display() member function.

This program reads a Pokémon data from a Kaggle CSV file and creates Pokemon objects to store their attributes, using file input, parsing, and a class structure to demonstrate external data processing in C++.

This program demonstrates how external data can be processed and organized into C++ objects using CSV input and class-based data storage.

