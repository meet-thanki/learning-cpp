/*Today I learnt basic enums in C++. More to come in the next few days.*/

#include <iostream>
using namespace std;

// C++ Enums: Special type that represents a group of constants

enum Level{
    LOW = 15, // manually, values can also be assigned instead of 0, 1 and 2. assigning value to one specific item, the other items' values inrement by one naturally.
    MEDIUM,
    HIGH // last item does not require a comma
    // It is a good practice to use all capital letters here
}; // semicolon necessary here

int main(){
    enum Level myVar; // we create a variable of enum to access it.
    myVar =  LOW;
    cout << myVar << endl; // outputs 0 as first item is always 0, second 1, and so on

    switch(myVar){ // enums are often used in switch case statements
        case 15:
            cout << "Low Level";
            break;
        
        case 16:
            cout << "Medium Level";
            break;
        
        case 17:
            cout << "High Level";
            break;
    }
    return 0;
}