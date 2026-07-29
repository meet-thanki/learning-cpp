#include <iostream>
using namespace std;

// C++ Inheritance

/*Inheritance concept can be broken down to 2 categories:
Base Class (parent) - the class being inherited from
Derived Class (child) - the class that inherits from another class*/

class Vehicle{
    public:
        string brand = "Ford";
        void honk(){
            cout << "Peep Peep" << endl;
        }
};

class Car: public Vehicle{ // syntax for inheritance -> class derived_class: public base_class
    public:
    string model = "Mustang";
};

int main(){
    Car myCar;
    myCar.honk();
    cout << myCar.brand << " " << myCar.model;
    return 0;
}