#include <iostream>
using namespace std;

// C++ Access Specifiers in Inheritance: protected members in base class are available as private members in derived class
/*super keyword does not exsist in C++ as C++ can have multiple inheritance.
so, ambiguity is introduced if we add super.*/

class Employee{
    protected:
        int salary;
};

class Programmer: public Employee{
    public:
        int bonus;
        // setter method
        void setSalary(int s){
            salary = s;
        }    
        
        // getter method
        int getSalary(){
            return salary;
        }
};

int main(){
    Programmer p1;
    p1.setSalary(5000);
    p1.bonus = 3000;
    cout << "Salary: " << p1.getSalary() << endl;
    cout << "Bonus: " << p1.bonus;
    return 0;
}