#include <iostream>
#include <cstdlib>
#include <ctime>   
#include <iomanip> 
using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            printf(" %d ", arr[i][j]);
        }
        cout << "\n";
    }
}
bool IsScalarMatrix(int matrix[3][3], short Rows, short Cols) {
    int scalarValue = matrix[0][0];
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            if (i == j && matrix[i][j] != scalarValue) {
                return false;
            }
            else if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    } 

    return true;
}

void PrintResult(int matrix[3][3], short Rows, short Cols) {
    if (IsScalarMatrix(matrix, Rows, Cols)) {
        cout << "YES: Matrix is scalar.\n";
    }
    else {
        cout << "No: Matrix is NOT scalar.\n";
    }
}

int main() {

    // Hardcoded scalar matrix for testing
    int matrix1[3][3] = {
        {9, 0, 0},
        {0, 9, 0},
        {0, 0, 9}
    };

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    cout << "\n";
    PrintResult(matrix1, 3, 3);

    return 0;
}