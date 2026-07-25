#include <iostream>
using namespace std;

// creating and using pointers

int main(){ 
    string sport = "Football";
    string* ptr = &sport;  // preferred way of creating a pointer is this,
    string sports[3] = {"Football", "Volleyball", "Cricket"};

    string food[3];
    string *ptrf = food;
    string* ptrs = sports;
    /*string *ptr = &sport;
    string * ptr = &sport;*/  // This is also a valid and accepted way of creating pointers

    cout << ptr << endl; // prints memory address of the variable stored in pointer
    cout << &sport << endl;

    // dereferencing a pointer: 
    cout << *ptr << endl; // prints the string stored in sport

    for(int i = 0; i < (sizeof(sports)/sizeof(sports[0])); i++){
        cout << "The sport stored at index " << i << " is: " << *(sports + i) << endl; // the name of an array is a pointer to the first index. Hence pointer arithmetic works perfectly in C++.
    }

    // modifying and defining using pointers 
    *food = "Cake";
    *(food + 1) = "Ice Cream";
    *(food + 2) = "Soup";

    for(int j = 0; j < (sizeof(food)/sizeof(food[0])); j++){
        cout << "The food stored at index " << j << " is: " << *ptrf << endl;
        ptrf++; // moving the pointer itself. the pointer food cannot be moved as it only points to the first index.
    }
    
    // pointer to pointer 
    string** pptr = &ptr; // pointer to pointer of variable sport
    cout << **pptr << endl;  // prints football

    return 0;
}