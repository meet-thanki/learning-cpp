/*I am starting Data Structures and Algorithms (DSA) from today.
Before properly diving into it, I must have some star patterns done, which are as follows.*/

// Reference: Strivers Playlist for DSA.

#include <iostream>
using namespace std;

// DSA: Star Patterns.
void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);

int main(){
    int n;
    cin >> n;
    pattern7(n);
    return 0;
}

// Pattern 1: nxn Square star pattern
void pattern1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

// Pattern 2: nxn Lower Triangle pattern
void pattern2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }   
}

// Pattern 3: nxn Lower Triangle integer pattern
void pattern3(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j+1;
        }
        cout << "\n";
    }   
}

// Pattern 4: nxn Lower Triangle integer pattern type 2
void pattern4(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << i+1;
        }
        cout << "\n";
    }   
}

// Pattern 5: nxn Upper Triangle star pattern
void pattern5(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << "\n";
    }  
}

// Pattern 6: nxn Upper Triangle Integer pattern
void pattern6(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << (n-j + 1);
        }
        cout << "\n";
    }  
}

// Pattern 7: Pyramid Pattern
void pattern7(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << "\n";
    }
}