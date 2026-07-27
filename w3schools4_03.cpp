#include <iostream>
using namespace std;

// C++ Booleans: Real-life example

int main(){
    int age;
    int votingAge = 18;
    cout << "Please enter your age: ";
    cin >> age; // referencing operator & not needed.

    cout <<(age > votingAge) << endl; // returns 1 if true and 0 if false
    bool ageEligible = (age > votingAge);
    bool citizen = true;

    if(ageEligible){
        cout << "You are above the age of 18" << endl;
        if(citizen){
            cout << "And you are a citizen. So you can vote. " << endl;
        }
        else{
            cout << "But you are not citizen. " << endl;
        }
    }
    else{
        cout << "You are below the age of voting.";
    }
    return 0;
}