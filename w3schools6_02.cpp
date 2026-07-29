#include <iostream>
using namespace std;

// C++ OOP: Class methods

class MyClass{
    public:
        void myMethod(){ // defining a method inside the class
            cout << "Hello person" << endl;
        }
        void getNumber(); // method declaration similar to function prototype declaration

        int sum(int a, int b); // passing parameters to the methods of the class
};

class Dog{
    public: 
        void bark(){
            cout << "Woof!" << endl;
        }
};
 
int main(){
    MyClass Obj1;

    Obj1.myMethod();
    Obj1.getNumber();
    cout << Obj1.sum(7, 5) << endl;

    Dog d1;
    d1.bark();
    return 0;
}

// defining the class methods below main() works as it is not implicit.
void MyClass::getNumber(){ // defining a method outside the class
    cout << 5 << endl;
}

int MyClass::sum(int a, int b){
    return (a+b);
}
