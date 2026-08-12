#include <iostream>
#include <cmath>
using namespace std;

// C++ DSA: Star Patterns 4

// unordered_map<int, char> dicts = {
//     {0, 'Z'},
//     {1, 'A'},
//     {2, 'B'},
//     {3, 'C'},
//     {4, 'D'},
//     {5, 'E'},
//     {6, 'F'},
//     {7, 'G'},
//     {8, 'H'},
//     {9, 'I'},
//     {10, 'J'},
//     {11, 'K'},
//     {12, 'L'},
//     {13, 'M'},
//     {14, 'N'},
//     {15, 'O'},
//     {16, 'P'},
//     {17, 'Q'},
//     {18, 'R'},
//     {19, 'S'},
//     {20, 'T'},
//     {21, 'U'},
//     {22, 'V'},
//     {23, 'W'},
//     {24, 'X'},
//     {25, 'Y'},
//     {26, 'Z'},
// };

char dict_array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void pattern17(int n);
void pattern18(int n);

int main(){
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}

void pattern17(int n){
    for(int i =1; i<=n; i++){
        for(int j = 0; j< (n-i); j++){
            cout << " ";
        }
        
        for(int j = 0; j < i; j++){
            int raw_index = j;
            int safe_index = (raw_index % 26 + 26)%26;
            cout << dict_array[safe_index];
        }

        // int raw_index = i-1;
        // int safe_index = (raw_index % 26 + 26)%26;
        // cout << dict_array[safe_index];
        
        for(int j=i-2; j>= 0; j--){
           int raw_index = j;
           int safe_index = (raw_index % 26 + 26) % 26;

           cout << dict_array[safe_index];
        }
        cout << "\n";
        }
    }


void pattern18(int n){
    int count = n;
    for(int i = 1; i<=n; i++){
        for(int j=count; j<=n; j++){
           int raw_index = j;
           int safe_index = (raw_index % 26 + 26) % 26;

           cout << dict_array[safe_index] << " ";
        }
        count--;
        cout << "\n";
    }
}