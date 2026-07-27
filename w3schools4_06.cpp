#include <iostream>
#include <vector>
using namespace std;

// Arrays (fixed size) and Vectors (dynamic size)

int main(){
    // Omitting size and initialisation in arrays
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"}; // it is completely ok to to specify array size when we initialise the array

    string toys[4]; // YOU MUST specify the size of the array when not initialising and declaring later
    toys[0] = "ABC";
    toys[1] = "DEF";
    toys[2] = "GHI";
    toys[3] = "JKL";
    toys[4] = "MNO"; 
    // Thus declaring the array size and initialisation may be omitted.


    // Vectors
    vector<string> cars_vect = {"Volvo", "BMW", "Ford"};
    cars_vect.push_back("Tesla");
    cars_vect.push_back("Ferrari"); // you can add as many elements in the vector as you want.

    int i = 0;
    for(string car_vect: cars_vect){
        cout << "The element " << i+1 << " of vector cars_vect is: " << car_vect << "." << endl;
        i++;
    }
    return 0;
}