#include <iostream>
using namespace std;

class MyClass{
    public: 
    MyClass(){ // the name of a constructor is same as that of the class name;
        cout << "Hello, you have created an object of MyClass successfully." << endl;
    }
    MyClass(string name); // overloaded constructor declaration
};

class Car{
    public:
        string brand;
        string model;
        int year;

        Car(){
            brand = "unknown";
            model = "unknown";
            year = 2000;
        }
        Car(string x, string y, int z){ // constructor with multiple parameters
            brand = x;
            model = y;
            year = z;
        }

        void showDetails(){
            cout << "The brand name of the car is: " << brand << endl;
            cout << "The model of the car is: " << model << endl;
            cout << "The year of manufacture of car is: " << year << endl;
        }
};

int main(){
    MyClass obj;
    MyClass obj2("Meet"); // constructor overloading using variation of parameters

    Car c1("Tesla", "1186AB", 2023);
    Car c2;

    c1.showDetails();
    c2.showDetails();
    return 0;
}

MyClass::MyClass(string name){
    cout << "Hello " << name << "." << endl;
}