#include <iostream>
using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            printf(" %d ", arr[i][j]);
        }
        cout << "\n";
    }
}

bool IsNumberInMatrix(int matrix[3][3], int numberToLookFor, short Rows, short Cols) {

	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (matrix[i][j] == numberToLookFor) {
				return true;
			}
		}
	}
    return false;
}

void PrintResult(int matrix[3][3], int numberToLookFor, short Rows, short Cols) {
    if (IsNumberInMatrix(matrix, numberToLookFor, Rows, Cols)) {
        cout << "YES: It is there.\n";
    }
    else {
        cout << "No: It is NOT there.\n";
    }
}

int main() {

    int matrix1[3][3] = {
        {77, 5, 12},
        {22, 20, 1},
        {1, 0, 9}
    };

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    int numberToLookFor;
    cout << "\nPlease Enter the number to look for in matrix? ";
    cin >> numberToLookFor;

    PrintResult(matrix1, numberToLookFor, 3, 3);

    return 0;
}