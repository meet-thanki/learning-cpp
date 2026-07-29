#include <iostream>
using namespace std;

// C++ Friend Functions
/*Normally, private members of a class can only be used using public methods like getters and setters.
Apart from that, we can also directly use special type of function called: friend functions.*/

/*Friend function is not a member of the class, still it can access the private members.*/
class Employee{
    private:
        int salary;

    // setter constructor:
    public:
        Employee(int s){
            salary = s;
        }
    
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){ // accessed differently than class methods :: keyword. it is not treated like a class method. rather an entire different function
    cout << emp.salary << endl;
}

int main(){
    Employee c1(3000);
    displaySalary(c1);
    return 0;
}