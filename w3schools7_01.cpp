#include <iostream>
using namespace std;

// C++ Exception Handling
/*Exception handling lets you catch and handle errors during runtime - so your program doesn't crash.*/

int main(){
    try{
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if(age >= 18){
            cout << "Access Granted! Welcome.";
        } 
        else{
            throw (age);
        }
    }
    // catch(int num){ // the parameter taken by the catch statement corresponds to the error variable thrown
    //     cout << "Access Denied! You must be atleast 18 years old." << endl;
    //     cout << "Entered age is: " << num;
    // }

    catch(...){ // If we do not know the throw type in try block, we use the "three dots" syntax
        cout << "Access Denied! You must be atleast 18 years old." << endl;
    }
    return 0;
}