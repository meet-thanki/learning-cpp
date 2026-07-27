#include <iostream>
#include <cmath> // math library in C++
using namespace std;

// C++ Math functions

int main(){
    int x = 5;
    int y = 10;
    float z = 5.9;

    // Maximum and Minimum values
    cout << max(x, y) << endl; // outputs 10
    cout << min(x, y) << endl; // outputs 5

    // Math library includes functions like sqrt(), round() -> rounds a number, log() -> natural logarithm
    cout << sqrt(y) << endl;
    cout << log(x) << endl;
    cout << round(z);
    return 0;
}