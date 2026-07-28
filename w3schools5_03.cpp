#include <iostream>
using namespace std;

// Instructions for code challenge:
/*Inside main(), complete the following steps:
1. Declare an int array named numbers with 5 elements
2. Set the first element (numbers[0]) to 10
3. Set the last element (numbers[4]) to 50
4. Print the first and last element using cout*/

int main(){
    int numbers[5];
    numbers[0] = 10;
    numbers[4] = 50;

    cout << numbers[0] << endl;
    cout << numbers[4];
    return 0;
}