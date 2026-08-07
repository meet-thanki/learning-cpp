#include <iostream>
using namespace std;

// C++ DSA: Star Pattern 2

void pattern8(int n);
void pattern9(int n);
void pattern10(int n);

int main(){
    int n;
    cin >> n;
    pattern10(n);
    return 0;
}

void pattern8(int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        for(int k = 0; k < (2*n-1)-2*i; k++){
            cout << "*";
        }

        for(int l = 0; l < i; l++){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern9(int n){
    for(int i = 0; i < 2*n; i++){
        if(i < n){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }

        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << "\n";
        }
        else{
        int s_i = i-n;
        for(int j = 0; j < s_i; j++){
            cout << " ";
        }

        for(int k = 0; k < (2*n-1)-2*s_i; k++){
            cout << "*";
        }

        for(int l = 0; l < s_i; l++){
            cout << " ";
        }
        cout << "\n";
    }
        }
    }
    
void pattern10(int n){
    for(int i=0; i <(2*n-1); i++){
        if(i < n){
            for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
        else{
            int s_i = i - n;
            for(int j = n-s_i-1; j > 0; j--){
                cout << "*";
            }
            cout << "\n";
        }
        
    }
}

// void pattern11(int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j<=i; j++){
//             if((count)%2 ==0){
//                 cout << "1 ";
//                 count++;
//             }
//             else{
//                 cout << "0 ";
//                 count++;
//             }
//         }
        
//         cout << "\n";
//     }
// }