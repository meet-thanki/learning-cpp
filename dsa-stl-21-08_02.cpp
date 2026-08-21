#include <bits/stdc++.h>
using namespace std;

// C++ Stacks: They operate on LIFO (Last-In First-Out) Principle.

// Only the top element is allowed to be accessed. Index access is invalid.
// push, pop and top are major functions
// All operations are O(1) operations

int main(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(8); // {8, 3, 2, 1}
    st.emplace(5); // {5, 8, 3, 2, 1}

    cout << st.top() << "\n"; // prints 5 as it is on the top

    st.pop(); // pops 5 -> {8, 3, 2, 1}
    cout << st.top() << "\n"; // prints 4 this time

    cout << st.size() << "\n"; // -> 4

    cout << boolalpha;
    cout << st.empty() << "\n"; // false

    stack<int> st1, st2;
    st1.swap(st2); // swap two stacks
}