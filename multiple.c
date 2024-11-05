#include <iostream>
#include <string>

// Base class Person
class Person {
public:
    std::string name;

    Person(std::string n) : name(n) {}

    void displayPerson() {
        std::cout << "Name: " << name << std::endl;
    }
};

// Base class Employee
class Employee {
public:
    int employeeID;

    Employee(int id) : employeeID(id) {}

    void displayEmployee() {
        std::cout << "Employee ID: " << employeeID << std::endl;
    }
};

// Derived class Manager, inheriting from both Person and Employee
class Manager : public Person, public Employee {
public:
    Manager(std::string n, int id) : Person(n), Employee(id) {}

    void displayManager() {
        displayPerson();
        displayEmployee();
    }
};

int main() {
    Manager manager("Alice", 101);
    manager.displayManager();
    return 0;
}

