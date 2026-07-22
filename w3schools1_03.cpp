#include <iostream>
using namespace std;

// code challenge from w3schools: to calculate the area of a rectangle.

int main(){
    int length;
    int breadth;
    // int area = length*breadth; -> doing this gives garbage data due to uninitialised data

    cout << "Please enter the length of the rectangle: ";
    cin >> length; 
    cout << "Please enter the breadth of the rectangle: ";
    cin >> breadth;

    int area = length*breadth;
    cout << "The area of the rectangle is: " << area << " sq. units";
    return 0;
}