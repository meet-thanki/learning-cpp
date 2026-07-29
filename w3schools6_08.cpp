#include <iostream>
using namespace std;

// C++ Multiple Inheritance (Supported by C++ but not by Java)
/*A class can also be derived from more than one base class using a comma-separated list.*/

class MyClass{
    public:
        void myFunction(){
            cout << "Some content in MyClass." << endl;
        }
};

class MyOtherClass{
    public:
        void myOtherFunction(){
            cout << "Some content in MyOtherClass." << endl;
        }
};

class MyChildClass: public MyClass, public MyOtherClass{};

int main(){
    MyChildClass c1;
    c1.myFunction();
    c1.myOtherFunction();
    return 0;
}