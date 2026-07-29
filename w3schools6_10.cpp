#include <iostream>
using namespace std;

// C++ Polymorphism and virtual functions
/*Polymorphism means "many forms" and it comes to light when there are many classes related to each other 
by inheritance. It is called method overloading.

Thus, a single action may be performed in different ways.*/

class Animal{
    public:
        void animalSound(){
            cout << "The animal makes: a sound." << endl;
        }
};

class Pig: public Animal{
    public:
        void animalSound(){
            cout << "The pig says: wee wee." << endl;
        }
};

class Dog: public Animal{
    public:
        void animalSound(){
            cout << "The dog says: woof woof." << endl;
        }
};

int main(){
    Animal a;
    Pig p;
    Dog d;

    a.animalSound();
    p.animalSound();
    d.animalSound();
    return 0;
}