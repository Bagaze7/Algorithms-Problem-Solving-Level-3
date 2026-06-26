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

void PrintMiddleRow(int arr[3][3], short Rows, short Cols) {
	for (short j = 0; j < Cols; j++) {
		printf(" %0*d ", 2, arr[1][j]);
	}
}

void PrintMiddleCol(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		printf(" %0*d ", 2, arr[i][1]);
	}
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int matrix1[3][3];

    FillMatrixWithRandomNumbers(matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    cout << "\nMiddle Row of Matrix1 is:\n";
    PrintMiddleRow(matrix1, 3, 3);

    cout << "\n\nMiddle Col of Matrix1 is:\n";
    PrintMiddleCol(matrix1, 3, 3);
    cout << "\n";

    return 0;
}