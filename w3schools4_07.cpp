#include <iostream>
using namespace std;

// Size of Arrays and Multidimensional Arrays

int main(){
    int myNumbers[5] = {1, 3, 5, 7, 10}; // recommended practice is to specify the size of the array in declaration
    cout << sizeof(myNumbers) << endl; // returns the total bytes stored by the array

    // to find the number of elements:
    int size = sizeof(myNumbers)/sizeof(myNumbers[0]);
    cout << size << endl;

    // Looping through an array using sizeof() operator
    for(int i = 0; i < size; i++){
        cout << myNumbers[i] << endl;
    }

    // Multi-dimensional arrays
    string letter[2][3] = {{"A", "B", "C"}, 
                           {"D", "E", "F"}};

    string letters2[2][2][2] = {
        {
            {"A", "B"}, {"C", "D"}
        }, {
            {"E", "F"}, {"G", "H"}
        } 
    }; // any number of dimensions are allowed, but more dimensions give more complex code

    // Accessing elements of a multidimensional array
    cout << letter[0][0] << endl;
    
    // Changing the elements of a multidimensional array
    letter[0][0] = "N";
    cout << letter[0][0] << endl;

    // Looping through a multidimensional array
    for(int i = 0; i < (sizeof(letter)/sizeof(letter[0])); i++){   // this gives number of rows
        for(int j = 0; j < (sizeof(letter[0])/sizeof(letter[0][0])); j++){  // this gives number of columns
            cout << letter[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                cout << letters2[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}