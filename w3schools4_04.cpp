#include <iostream>
using namespace std;

int main(){
    int age = 25;
    int minAge = 17;

    bool result = age >= minAge;
    
    cout << boolalpha;
    cout << "The result of age being greater than or equal to minAge is \"" << result << "\".";
    return 0;
}