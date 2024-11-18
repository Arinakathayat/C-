#include <iostream>
using namespace std;
// Base class
class Vehicle {

public:
    Vehicle() {
        cout << "Vehicle created" << endl;
    }
    void displayVehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

// Derived class from Vehicle (Single Inheritance)
class Car : public Vehicle {
public:
    Car() {
        cout << "Car created" << endl;
    }
    void displayCar() {
        cout << "This is a Car" << endl;
    }
};

// Another independent base class
class Brand {
public:
    Brand() {
        cout << "Brand set" << endl;
    }
    void displayBrand() {
        cout << "This is a Brand" << endl;
    }
};


// Derived class from both Car and Brand (Hybrid Inheritance: Single + Multiple Inheritance)
class Sedan : public Car, public Brand {
public:
    Sedan() {
        cout << "Sedan created" << endl;
    }
    void displaySedan() {
        cout << "This is a Sedan" << endl;
    }
};

int main() {
    Sedan mySedan;
    mySedan.displayVehicle();  // From Vehicle class
    mySedan.displayCar();      // From Car class
    mySedan.displayBrand();    // From Brand class
    mySedan.displaySedan();    // From Sedan class
    return 0;
}
