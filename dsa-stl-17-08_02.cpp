#include <bits/stdc++.h>
using namespace std;

/* C++ STL: Containers
1. Vector (with Iterators)*/


int main(){
    vector<int> v1;

    // pre-initialised vector
    vector<int> v2(5); // 5 indices initialised with random data
    vector<int> v3(5, 100); // 5 indices initialised all to 100
    vector<int> v4(v3); // initialised using another vector 

    // using pair in vector type
    vector<pair<int, int>> v5;

    // vector functions
    v1.push_back(1);
    v1.emplace_back(2); // faster than push_back

    v5.push_back({1, 3});
    v5.emplace_back(1, 3); // assumes the declaration as pair 

    // Iterators:
    vector<int>::iterator it = v1.begin();

    it++; // similar to pointer arithmetic
    cout << *it << "\n";

    // other iterators
    /*vector<int>::iterator it = v1.end();
    vector<int>::iterator it = v1.rend();
    vector<int>::iterator it = v1.rbegin();*/

    cout << v1.back() << "\n";

    // appending more elements in v1:
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    // printing vector
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";
    for(auto it = v1.begin(); it != v1.end(); it++){ // using auto type (auto assignment)
        cout << *it << " ";
    }
    cout << "\n";
    for(auto it: v1){
        cout << it << " "; // using for-each loop for normal array style output
    }
    cout << "\n";
    // for(vector<int>::iterator it = v1.begin(): v1){
    //     cout << *it << " "; // using for-each loop for iterator does not work
    // }

    // delete vector element
    v1.erase(v1.begin()+1); // deletes single element 2.
    v1.erase(v1.begin()+2, v1.begin()+4); // deletes multiple elements: elements 4 and 5, v1.begin() + 4 is iterator after the end element we wish to delete (points to index after element 5)
    // finally v1 = {1, 3}
    for(auto it: v1){
        cout << it << " ";
    }
    cout << "\n";

    // insert vector element
    v1.insert(v1.begin()+1, 2); // inserts single element 2
    v1.insert(v1.begin()+2, 2, 7); // inserts multiple elements that are same

    vector<int> copy(3, 50);
    v1.insert(v1.begin()+5, copy.begin(), copy.end()); // inserting another vector
    for(auto it: v1){
        cout << it << " ";
    }
    cout << "\n";

    // other functions
    cout << v1.size() << "\n"; // size

    v1.pop_back(); // removes last element
    cout << "After removing last element: \n";
    for(auto it: v1){
        cout << it << " ";
    }
    cout << "\n";

    cout << "After swapping v1 with v3: \n";
    v1.swap(v3); // swap
    for(auto it: v1){
        cout << it << " ";
    }
    cout << "\n";

    v1.clear(); // empties the vector
    cout << boolalpha;
    cout << v1.empty() << "\n"; // returns a boolean value true or false whether vector is empty or filled.
    return 0;
}