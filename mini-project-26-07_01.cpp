/*Today, I have made a mini project on dynamic memory allocation in C++. Shortly after, I shall be moving 
to OOP concepts and related projects.*/

#include <iostream>
using namespace std;

// mini project: 2D matrix generator using a rule, by use of dynamic allocation of memory

void genMatrix(int rows, int columns);
void freeMatrix(int** matrix, int rows);

int main(){
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the numbers of columns: ";
    cin >> columns;

    genMatrix(rows, columns);
    return 0;
}

void genMatrix(int rows, int columns){
    int** matrix = new int*[rows]; // this creates  a

    for(int k = 0; k < rows; k++){
        matrix[k] = new int[columns];
    }

    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < columns; j ++){
            matrix[i][j] = (i+1)*(j+1);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    freeMatrix(matrix, rows);
}

void freeMatrix(int** matrix, int rows){
    if(matrix == nullptr){
        return;
    }

    for(int i = 0; i < rows; i++){
        delete[] matrix[i]; // this frees the actual integers in row i
    }

    delete[] matrix; // this frees the outer array of pointers
}