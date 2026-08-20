#include <bits/stdc++.h>
using namespace std;

// C++ STL: List

int main(){
    // Only major difference between list and vector is: front elements can also be added in list, compared to insert in vector.
    // The latter is costlier, time complexity wise

    list<int> ls;

    ls.push_back(3); // {3}
    ls.emplace_back(5); // faster -> {3, 5}

    ls.push_front(2); // -> {2, 3, 5}
    ls.emplace_front(1); // -> {1, 2, 3, 5}

    // rest functions are similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    for(auto it: ls){
        cout << it << " ";
    }
    cout << "\n";

    // or this type of loop
    for(list<int>::iterator it = ls.begin(); it != ls.end(); it++){
        cout << *it << " ";
    }
    return 0; 
}