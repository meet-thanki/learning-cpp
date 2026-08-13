#include <iostream>
using namespace std;

// C++ DSA: Star Patterns 5

void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
// void pattern22(int n);

int main(){
    int n;
    cin >> n;
    pattern21(n);
    return 0;
}

void pattern19(int n){ // was able to entirely come up with this myself!
    for(int i = 1; i <=n; i++){
        for(int j = (n-i) + 1; j >= 1; j--){
            cout << "*";
        }

        for(int j = 0; j < 2*(i - 1); j++ ){
            cout << " ";
        }

        for(int j = (n-i) + 1; j>=1; j--){
            cout << "*";
        }

        cout << "\n";
    }

    for(int i = 1; i<=n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        for(int j = 2*n; j>2*i; j--){
            cout << " ";
        }

        for(int j = 0; j < i; j++){
            cout << "*";
        }

        cout << "\n";
    }
}

void pattern20(int n){ // flipped pattern of 19
    for(int i = 1; i<=n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        for(int j = 2*n; j>2*i; j--){
            cout << " ";
        }

        for(int j = 0; j < i; j++){
            cout << "*";
        }

        cout << "\n";
    }

    for(int i = 1; i <=n; i++){
        for(int j = (n-i) + 1; j >= 1; j--){
            cout << "*";
        }

        for(int j = 0; j < 2*(i - 1); j++ ){
            cout << " ";
        }

        for(int j = (n-i) + 1; j>=1; j--){
            cout << "*";
        }

        cout << "\n";
    }
}

void pattern21(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 0; j < n; j++){
            if (i==1) {
                cout << "*";
                if(j== n-1){
                    cout << "\n";
                }
            }
            else{
                break;
            }
        }
        
        if(i >= 2 && i <= (n-1)){
            cout << "*";
            for(int j = 0; j<n-2; j++){
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }

        for(int j = 0; j < n; j++){
            if(i == n){
                cout << "*";
                if(j== n-1){
                    cout << "\n";
                }
            }
            else{
                break;
            }
        }
    }
}

// void pattern22(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = n; j > 0; j--){
//             if(i == 1 || i == n){
//                 cout << j;
//                 if(j == 1){
//                     cout << "\n";
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }