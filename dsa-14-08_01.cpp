#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// C++ DSA - Final Star Pattern

void pattern22(int n);
int main(){
    int n;
    cin >> n;
    pattern22(n);
    return 0;
}

void pattern22(int n){
    for(int i = 1; i <= 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            // initial logic

            // if(j==0 || j== 2*n-2 || i==(2*n-1)){
            //     cout << n << " ";
            // }
            // else{
            //     cout << n-i+1 << " ";
            // }

            // correct geometric logic
            int dist_top, dist_left, dist_bottom, dist_right, min_dist;
            dist_top = i - 1;
            dist_left = j;

            dist_bottom = 2*n - 1 - i;
            dist_right = 2*n - 2 - j;

            min_dist = min({dist_top, dist_left, dist_bottom, dist_right});

            cout << n - min_dist << " ";
        }
        
        cout << "\n";
    }
}