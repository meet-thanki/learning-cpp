#include <iostream>
using namespace std;

// real-life examples of arrays and some operations on them

int main(){
    // to find the average of all ages present in the array
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    
    float sum = 0; // to get most accurate value
    float average;
    int length = sizeof(ages)/sizeof(ages[0]);

    for(int age: ages){
        sum += age;
    }

    average =  (sum/length);
    cout << "The average of all ages is: " << average << endl;

    // to find the maximum and minimum values in an array
    int max = ages[0];
    int min = ages[0];
    int countIndexMax = 0;
    int countIndexMin = 0;

    for(int i = 0; i < length; i++){
        if(ages[i] > max){
            max = ages[i];
            countIndexMax = i;
        }

        if(ages[i] < min){
            min = ages[i];
            countIndexMin = i; 
        }
    }

    cout << "The person with the maximum age is: " << max << " at index: " << countIndexMax << endl;
    cout << "The person with the minimum age is: " << min << " at index: " << countIndexMin;

    return 0;
}