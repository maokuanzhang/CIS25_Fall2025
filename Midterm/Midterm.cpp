#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// BankAccount class definition
class BankAccount {
private:
    double balance;  // balance variable

	//  The method to save each transaction to a file 
    void saveTransaction(const string& type, double amount, const string& item = "") 
    {
        ofstream file("transactions.txt", ios::app); // open file in append mode
        if (file.is_open()) 
        {
            file << type;
            if (!item.empty()) 
            {
                file << " (" << item << ")";
            }
            file << " - $" << fixed << setprecision(2) << amount << endl;
            file.close();
        }
        else 
        {
            cout << "Unable to open transactions.txt" << endl;
        }
    }

public:
    // Initialize balance to zero
    BankAccount() 
    {
        balance = 0.0;
    }

    // The method to deposit funds 
    void deposit(double amount) 
    {
        if (amount <= 0) 
        {
            cout << "Deposit amount must be positive." << endl;
            return;
        }
        balance += amount;
        cout << "Deposited $" << fixed << setprecision(2) << amount << endl;
        saveTransaction("Deposit", amount);
    }

    // The method to make a purchase (deduct from balance) 
    void makePurchase(const string& item, double cost) 
    {
        if (cost > balance) 
        {
            cout << "Insufficient funds for \"" << item << "\"." << endl;
        }
        else 
        {
            balance -= cost;
            cout << "Purchased \"" << item << "\" for $" << fixed << setprecision(2) << cost << endl;
            saveTransaction("Purchase", cost, item);
        }
    }

    // The method to print the current balance 
    void displayBalance() const 
    {
        cout << "\nCurrent Balance: $" << fixed << setprecision(2) << balance << endl;
    }

    // Method to display all previous transactions from the file
    void showAllTransactions() 
    {
        ifstream file("transactions.txt");
        if (!file.is_open()) 
        {
            cout << "No transaction history found." << endl;
            return;
        }

        cout << "\nTransaction History:" << endl;
        cout << "--------------------------------------" << endl;
        string line;
        while (getline(file, line)) 
        {
            cout << line << endl;
        }
        cout << "--------------------------------------" << endl;
        file.close();
    }
};


int main() 
{
    BankAccount myAccount;  // Create a BankAccount object

    cout << "=== Bank Account Simulation ===" << endl;

    // Add an initial deposit
    myAccount.deposit(200.00);

    // Make several purchases
    myAccount.makePurchase("Starbucks Latte", 4.81);
    myAccount.makePurchase("Birthday Cake", 107.99);
    myAccount.makePurchase("Movie ticket", 18.00);
    myAccount.makePurchase("Flowers", 129.99); // intentionally exceeds balance

    // Print the final balance
    myAccount.displayBalance();

    // Print all saved transactions from the file
    myAccount.showAllTransactions();

    cout << "\nProgram finished successfully." << endl;
    return 0;
}
