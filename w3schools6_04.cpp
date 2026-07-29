#include <iostream>
using namespace std;

// C++ Access Specifiers and Encapsulation: they control how the members of the class may be accessed
/*
public: these members can be accessed and modified from outside the code (main door analogy)
protected: members cannot be accessed outside of the class, but are available as private members in child class (family-room analogy)
private: members can only be accessed within the class (locker analogy)
*/

/*For encapsulation, we make sure that sensitive data is hidden to users. 
We declare private members to do this, and use getter or setter methods for modification of private members.*/

/*Encapsulation ensures better control of data, because one part of code can be changed without affecting other parts.*/
class MyClass{
    private:
        int pvtNum = 0; // should be initiliased

    public:
        int myNum;

        // MyClass(int x, int y){
        //     myNum = x;
        //     pvtNum = y; // setter method here is a constructor
        // }
    
        MyClass(){
            cout << "Object created successfully." << endl;
        }

        // setter method
        void setPvtNum(int s){
            pvtNum = s;
        }

        // getter method
        void getPvtNum(){
            cout << pvtNum << endl;
        }
};

int main(){
    MyClass myObj1, myObj2;
    myObj1.myNum = 50; // correct
    // myObj.pvtNum = 36; // not allowed
    
    // accessing private member using getter method
    myObj1.setPvtNum(5);
    myObj2.setPvtNum(9);

    myObj1.getPvtNum();
    myObj2.getPvtNum();
    return 0;
}