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

bool IsIdentityMatrix(int matrix[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (i == j && matrix[i][j] != 1) {
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
    if (IsIdentityMatrix(matrix, Rows, Cols)) {
        cout << "YES: Matrix is identity.\n";
    }
    else {
        cout << "No: Matrix is NOT identity.\n";
    }
}

int main() {

    // Hardcoded identity matrix for testing
    int matrix1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    cout << "\n";
    PrintResult(matrix1, 3, 3);

    return 0;
}