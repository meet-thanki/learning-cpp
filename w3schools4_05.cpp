#include <iostream>
using namespace std;

// Learning basic syntax of arrays in C++ with proper notes

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; // array is created using datatype string_name[no_of_elements] = {elements};
    int myNumbers[4] = {1, 3, 5, 10};
    // accessing array elements
    cout << cars[0] << endl;

    // changing array elements
    cars[0] = "Bugatti";
    cout << cars[0];

    // looping through arrays
    for(int i = 0; i < 4; i++){
        cout << i << " = " << cars[i] << endl;
    }

    for(int j = 0; j < 4; j++){
        cout << myNumbers[j] << endl;
    }

    // using for-each loop to loop through arrays
    for(string car: cars){ // -> this means for each car in cars array, print it
        cout << car << endl;
    }

    for(int num: myNumbers){
        cout << num << endl;
    }

    // Using external variable in for-each loop
    int i = 0;
    for(int num: myNumbers){
        cout << "The number at index " << i << " is: " << num << endl;
        i++;
    }
    return 0;
}