#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== Simple Menu About Me =====\n";
    cout << "1. My Name\n";
    cout << "2. My Major\n";
    cout << "3. My Hobby\n";
    cout << "4. My Goal\n";
    cout << "5. Exit\n";
    cout << "================================\n";
    cout << "Enter your option: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nMy name: Jimmy\n";
    }
    else if (choice == 2) {
        cout << "\nMy major: Data Analytics\n";
    }
    else if (choice == 3) {
        cout << "\nMy hobby: Hiking with my friends\n";
    }
    else if (choice == 4) {
        cout << "\nMy Goal: Gaining more experience in data analysis\n";
    }
    else if (choice == 5) {
        cout << "\nGoodbye!\n";
    }
    else {
        cout << "\nInvalid input, Please enter a number from 1-5.\n";
    }
    return 0;
}
