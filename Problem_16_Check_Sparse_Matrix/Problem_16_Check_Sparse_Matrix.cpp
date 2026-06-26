#include <iostream>
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

bool IsSparseMatrix(int matrix[3][3], short Rows, short Cols) {
	short half = (Rows * Cols) / 2;
	short zeroCount = 0;
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (matrix[i][j] == 0) {
				zeroCount++;
			}
		}
	}
	if (zeroCount > half) {
		return true;
	}
    // Write your logic here to count zeros and compare with total elements

    return false;
}

void PrintResult(int matrix[3][3], short Rows, short Cols) {
    if (IsSparseMatrix(matrix, Rows, Cols)) {
        cout << "YES: It is Sparse.\n";
    }
    else {
        cout << "No: It's NOT Sparse.\n";
    }
}

int main() {

    // Hardcoded matrix to test Sparse condition (has 6 zeros out of 9 elements)
    int matrix1[3][3] = {
        {0, 0, 12},
        {0, 0, 1},
        {0, 0, 9}
    };

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    cout << "\n";
    PrintResult(matrix1, 3, 3);

    return 0;
}