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

short CountNumberInMatrix(int matrix[3][3], int numberToCount, short Rows, short Cols) {
	short count = 0;
    for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (matrix[i][j] == numberToCount) {
				count++;
			}
		}
	}

    return count;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int matrix1[3][3];
    FillMatrixWithRandomNumbers(matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    int numberToCount;
    cout << "\nEnter the number to count in matrix? ";
    cin >> numberToCount;

    cout << "Number " << numberToCount << " count in matrix is "
        << CountNumberInMatrix(matrix1, numberToCount, 3, 3) << "\n";

    return 0;
}