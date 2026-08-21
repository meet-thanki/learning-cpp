#include <bits/stdc++.h>
using namespace std;

/* C++ Deques: similar to vector and list but it works like a chunked map. 
It uses a central directory of pointers pointing to multiple fixed size sub arrays (chunks)*/

int main(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();
    dq.front();

    // rest functions similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}