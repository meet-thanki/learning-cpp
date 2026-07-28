#include <iostream>
using namespace std;

// mini project: hitting a ship, which is represented as "1" in a grid made by a mulitdimensional array

int main(){
    int ships[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    int hits = 0;
    int noTurns = 0;

    while (hits < 4){
        int rows, columns;

        cout << "Please select a row (0 to 3): ";
        cin >> rows; 

        cout << "Please select a column (0 to 3): ";
        cin >> columns;

        if(ships[rows][columns] == 1){
            ships[rows][columns] = 0; // setting the hit ship to 0
            hits++;

            cout << "Critical hit. " << (4-hits) << " ships remain!" << endl;
        }
        else{
            cout << "You missed. Try again." << endl;  
        }
        noTurns++;
    }

    cout << "You completed the game in " << noTurns << " tries.\nWell done!";
    return 0;
}