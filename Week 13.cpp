#include "accessControl.h"

// User implementation
void User::accessLevel() 
{
    cout << "Access: Basic system permissions." << endl;
}

// Employee implementation
void Employee::accessLevel() 
{
    cout << "Access: Employee privileges. Can modify limited system data." << endl;
}

// InventoryManager implementation
void InventoryManager::accessLevel() 
{
    cout << "Access: Full inventory management permissions." << endl;
}



int main() 
{

    InventoryManager manager;
    manager.accessLevel();

    return 0;
}

