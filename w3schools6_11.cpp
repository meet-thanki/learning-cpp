#include <iostream>
using namespace std;

// C++ Virtual Functions 
/*Virtual Function: member function in the base class that can be overridden in derived class.*/
class Animal{
    public:
        virtual void sound(){ // using the virtual keyword. it is example of runtime polymorphism or dynamic polymorphism
            cout << "The animal makes a sound.";
        }
};

class Dog: public Animal{
    public: 
        void sound() override{ // use the override keyword here for better clarity
            cout << "Woof!";
        }
};

int main(){
    Animal* a; 
    Dog d;
    a = &d;
    a->sound(); // Even though the pointer points to the memory address of Dog object, while returning the function, the compiler checks on the type of the pointer, which is Animal.
    return 0; // -> operator is used to access the members of a class using a pointer. (similar to *pointer.member)
}