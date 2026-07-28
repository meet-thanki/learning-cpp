#include <iostream>
#include <functional> // needed for std::function
using namespace std;

// lambda functions: Mini function
/*Syntax:
[capture] (parameters) {code}
Datatype: unnameable (auto)*/

/*We use a lambda function when:
1. We only need the function once
2. The code is short and simple
3. We want to pass a quick function into another function*/

void myFunction(function<void()> myFunc); // Passing a function as an argument requires this syntax.

int main(){
    // basic use of lambda functions
    auto message = [](){  // compulsorily we use auto type with lambda function, because lambdas have an unnameable type
        cout << "Hello World" << endl;
    }; // semicolon necessay here

    auto sum = [](int a, int b){
        return a+b;
    };
    message();
    sum(5, 7);

    myFunction(message); // lamda function passed as argument to myFunction

    // using lambda function in loops
    for(int i = 0; i < 3; i++){
        auto message1 = [i](){ // capture list uses i
            cout << "Number: " << i << endl;
        };
        message1();
    }

    // capture clause [] is used to give the lamdba function, access to the variables outside its scope.
    // lambda function actually uses the copy of the variable given in the capture clause.

    // Pass by Reference: For lambda function to use the actual value of the variable.
    int x = 10;
    auto message2 = [x](){
        cout << x << endl;
    };
    message2();

    auto message3 = [&x]{
        x++; // Passing by reference allows modification to actual variable
    };
    message3();
    cout << x; // outputs 11 now

    return 0;
}

void myFunction(function<void()> myFunc){
    myFunc();
    myFunc();
}