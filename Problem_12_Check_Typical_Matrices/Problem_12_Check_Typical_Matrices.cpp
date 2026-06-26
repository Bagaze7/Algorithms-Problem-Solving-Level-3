#include <iostream>
#include <cstdlib>
#include <ctime>   
#include <iomanip> 
using namespace std;

int RandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

bool AreMatricesTypical(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (matrix1[i][j] != matrix2[i][j]) {
				return false;
			}
		}
	}   

    return true;
}
void PrintMatrixEqualityResult(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols) {
	if (AreMatricesTypical(matrix1, matrix2, Rows, Cols)) {
		cout << "YES: both matrices are typical.\n";
	}
	else {
		cout << "No: matrices are NOT typical.\n";
	}
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int matrix1[3][3];
    int matrix2[3][3];

    FillMatrixWithRandomNumbers(matrix1, 3, 3);
    FillMatrixWithRandomNumbers(matrix2, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    cout << "\nMatrix2:\n";
    PrintMatrix(matrix2, 3, 3);

	PrintMatrixEqualityResult(matrix1, matrix2, 3, 3);

    return 0;
}