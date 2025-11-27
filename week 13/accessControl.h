#ifndef ACCESSCONTROL_H
#define ACCESSCONTROL_H

#include <iostream>
using namespace std;

// Base class User
class User {
public:
    virtual void accessLevel();
};

// Derived class Employee
class Employee : public User {
public:
    void accessLevel() override;
};

// Derived class InventoryManager
class InventoryManager : public Employee {
public:
    void accessLevel() override;
};

#endif

