#include <iostream>
using namespace std;

// C++ Object-Oriented Programming.
/*I have studied 4 pillars of object oriented programming in my class 12th:
1. Data Encapsulation: Protecting the data from external usage.
2. Data Abstraction: Kind of like: "It does what it says". Abstract.
3. Polymorphism: Same thing, different forms.
4. Inheritance: Deriving child classes from a parent class.

The explanations above are in simple, informal terms as per my understanding.*/

class MyClass{ // Pascal Case usage for class names
    public: // access modifier
        int myNum;
        string myString;
};

class Book{
    public:
        string title;
        string author;
        int year;
};

int main(){
    MyClass myObj1, myObj2; // creating objects of class MyClass
    myObj1.myNum = 5;
    myObj1.myString = "Hello World";

    myObj2.myNum = 7;
    myObj2.myString = "Hello World, How are you?";

    Book myBook1, myBook2;
    myBook1.title = "Matilda";
    myBook1.author = "Roald Dahl";
    myBook1.year = 1988; 

    myBook2.title = "The Giving Tree";
    myBook2.author = "Shel Silverstein";
    myBook2.year = 1964; 

    // printing attribute values
    cout << myObj1.myNum << endl;
    cout << myObj1.myString << endl;
    cout << myObj2.myNum << endl;
    cout << myObj2.myString << endl;
    
    cout << myBook1.title << endl;
    cout << myBook1.author << endl;
    cout << myBook1.year << endl;
    cout << myBook2.title << endl;
    cout << myBook2.author << endl;
    cout << myBook2.year;
    return 0;
}