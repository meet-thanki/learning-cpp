#include <iostream>
using namespace std;

// C++ Input Validation
/*Input validation makes sure that the input is correct before the program continues.*/

int main(){
    // validate integer input
    int num;
    cout << "Enter the number: ";
    while(!(cin>> num)){ // we keep asking till the user enters a right number
        cout << "Invalid Input. Try again." << endl;
        cin.clear(); // this resets input error
        cin.ignore(10000, '\n'); // this removes bad input
    }

    // validate number range
    int num2;
    do{
        cout << "Choose a number between 1 and 5: ";
        cin >> num2;
    } while(num2 < 1 || num2 > 5); // we keep asking till the user enter the number between 1 and 5.
    
    cout << "You chose: " << num2;

    // validate text input
    string name;
    do{
        cout << "Enter your name: ";
        getline(cin, name);
    } while(name.empty()); // we keep asking till the user enters something
    return 0;
}

