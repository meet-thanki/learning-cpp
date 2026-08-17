#include <bits/stdc++.h>
using namespace std;

// C++ STL: Pairs

int main(){
    // C++ STL is divided into major 4 parts: 1. Algorithms, 2. Containers, 3. Functions, 4. Iterators
    // We first learn Containers and Iterators.
    
    // Pairs
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, pair<pair<int, int>, pair<int, int>>> p3 = {1, {{2,3}, {4, 5}}};
    cout << p3.first << " " << p3.second.first.first << " " << p3.second.first.second << " " << p3.second.second.first << " " << p3.second.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    for(pair<int, int> obj: arr){
        cout << obj.first << " " << obj.second << endl;
    }

    pair<int, string> p5 = {1, "MEET"};
    cout << p5.first << " " << p5.second << endl;
    return 0;
}