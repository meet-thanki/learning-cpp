#include <iostream>
using namespace std;

// C++ Multilevel Inheritance
/*A class can also be derived from one class, which is already derived from another class.*/

class MyClass{
    public:
        void myFunction(){
            cout << "Some content in parent class" << endl;
        }
};

class MyChild: public MyClass{
    public:
        void myFunction(){
            cout << "Some content in child class" << endl;
        } 
};

class MyGrandChild: public MyChild{
    public:
        void myFunction(){ // function overloading in inherited classes
            cout << "Some content in grandchild class" << endl;
        }
};

int main(){
    MyClass c1;
    MyChild c2;
    MyGrandChild c3;

    c1.myFunction();
    c2.myFunction();
    c3.myFunction();
    return 0;
}