#include <iostream>
using namespace std;

// references

int main(){
    string food = "Pizza";
    string &meal = food;  // This is called creating a reference of the variable food.

    meal  = "Burger";  // changing any of the one influences the other.

    cout << food << endl;
    cout << meal << endl;

    cout << &food << endl; // memory address of variable food
    cout << &meal; // both food and meal have the same memory addresses
    return 0;
}