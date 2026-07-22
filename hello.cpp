#include <iostream> // used to include the library in cpp
using namespace std; 

int main(){
    const int myNum = 5; // const means unchangeable data which is read-only
    /* const int myNum;
    myNum = 60;   -> This doesn't work.
    */
    float myFloat = 5.2;
    double myDouble = 6.99;
    bool myBool = true; // lowercase true or false work perfectly
    string myName = "Meet";

    cout <<"Hello World!\n";
    cout <<"Learning C++\n";
    cout << 3 << "\n";  // the escape sequence \n operator can also be used like this in the line.
    cout << 4*5 << endl; // endl is used as an alternative to \n

    cout << myName << endl; // direclty done without using format specifiers

    // Displaying variables
    cout << "My name is " << myName << " and I am learning C++." << endl;
    return 0;
}