#include <iostream>
using namespace std;

// Booleans in C++

int main(){
    int x = 5;
    int y = 10;
    bool isCodingFun = true;
    bool isItTasty = false;
    bool result = x > y; // this demonstrates the use of boolean expressions (made using comparison operators) and return a boolean value
    bool result2 = (x == 5);

    cout << boolalpha; // this enables the words true and false to be printed as they are
    /* boolalpha is not a datatype. It is an I/O manipulator. This changes how cout displays boolean values.*/
    cout << isCodingFun << endl;
    cout << result << endl;

    cout << noboolalpha; // this gets us back to the default behaviour
    cout << isItTasty << endl;
    cout << result2;
    return 0;
}