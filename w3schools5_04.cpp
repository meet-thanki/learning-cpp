#include <iostream>
using namespace std;

// C++ Variable Scope

int y = 5; // global variable: available from within any scope, global and local
int var = 10;

// C++ Variable Scope
void myFunction(){
    int var = 11;
    int x = 5; // local variable: created inside a function and can only be used inside it.
    cout << x << endl;
    // cout << y; // global variable can be accessed here

    cout << var << endl; // here output is 11. this is because in variables having same names in global and local scope are treated differently by C++
    var++;
    cout << var << endl;
}

int main(){
    myFunction(); 
    // cout << x;  -> Trying to access a local variable outside its scope leads to error
    cout << y << endl; //global variable can also be accessed here

    cout << var << endl; // here output is 10.
    return 0;
}