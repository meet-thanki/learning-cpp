#include <iostream>
#include <string>
using namespace std;

// memory management in C++
/* You use memory management typically when:
1. You don't know how much memory you'll need in advance (like how many guests or scores)
2. You want to create memory while the program is running, based on user input
3. You need to store large or flexible amounts of data
4. You want full manual control over memory (performance-critical code)*/

int main(){
    // sizeof() operator is used to return the size of a variable type.
    /* int gives 4 bytes usually.
    float gives 4 bytes.
    double gives 8 bytes.
    char gives 1 byte.*/

    /* Use of new and delete keywords:
    int* ptr = new int;
    *ptr = 45;
    cout << *ptr; -> returns 45.*/

    int numGuests;
    cout << "How many guests are arriving today? " << endl;
    cin >> numGuests;

    if(numGuests <= 0){
        cout << "The number of guests should be atleast 1.";
    }

    string* ptr = new string[numGuests]; // allocate a dynamic array

    for(int i = 0; i < numGuests; i ++){
        cout << "Enter the name of guest " << i+1 << ": ";
        cin >> ptr[i];
    }

    for(int j = 0; j < numGuests; j ++){
        cout << "The name of guest " << j+1 << " is: " << *(ptr + j) << endl;
    }

    delete[] ptr; // freeing the used memory is important. don't forget!
    return 0;
}