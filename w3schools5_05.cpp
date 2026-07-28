#include <iostream>
using namespace std;

// recursions
int sum(int k){
    if(k > 0){
        return k + sum(k-1);
    }
}

int factorial(int k){
    if(k > 1){
        return k*factorial(k-1);
    }
    else{
        return 1;
    }
}

int countdown(int n){
    if(n>0){
        cout << n << endl;
        countdown(n-1);
    }
    else{
        cout << "Happy New Year!";
    }
}

int main(){
    int range_sum;
    cout << "Enter upto which natural number, sum is required? ";
    cin >> range_sum;

    int range_factorial;
    cout << "Enter natural number for which factorial is required? ";
    cin >> range_factorial;

    cout << sum(range_sum) << endl;
    cout << factorial(range_factorial) << endl;
    countdown(5);
    return 0;
}