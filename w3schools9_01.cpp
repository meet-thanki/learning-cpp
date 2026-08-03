#include <iostream>
using namespace std;

// C++ Templates: Templates let you write functions in C++ that can be used with different datatypes

/*Syntax:
template <typename T>
return_type func_name(T parameter){
    // code
}*/

/*Templates let you:
1. Avoid repeating the same logic for different types
2. Write cleaner, reusable code
3. Support generic programming*/

template <typename T>
class Box{
    public:
        T value;
        Box(T v){
            value = v;
        }

        void displayValue(Box b1);
};


template <typename T1, typename T2>
class Pair{
    public:
        T1 first;
        T2 second;

        Pair(T1 a, T2 b){
            first = a; 
            second = b;
        }

        void displayValues(Pair p1);
};


template <typename T>
T add(T a, T b){
    return (a+b);
}

int main(){
    int out1;
    double out2;
    out1 = add<int>(5, 6); // <int> tells compiler to use int in place of T
    out2 = add<double>(5.6, 6.4);
    cout << out1 << endl;
    cout << out2;

    Box<int> b1(50);
    Box<string> b2("hello");

    b1.displayValue(b1);
    b2.displayValue(b2);

    Pair<int, string> p1(100, "Meet");
    Pair<string, int> p2("Thanki", 200);

    p1.displayValues(p1);
    p2.displayValues(p2);
    return 0;
}

// for class method definitions outside the class, the definition of the function requires template to be written again

template <typename T>
void Box<T>::displayValue(Box<T> b1){
    cout << b1.value << "\n";
}

template <typename T1, typename T2>
void Pair<T1, T2>::displayValues(Pair<T1, T2> p1){
    cout << "first: " << p1.first << "\n";
    cout << "second: " << p1.second << "\n";
}