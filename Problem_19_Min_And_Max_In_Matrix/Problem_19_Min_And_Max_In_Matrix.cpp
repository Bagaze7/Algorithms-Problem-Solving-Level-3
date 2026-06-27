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

int MinNumberInMatrix(int matrix[3][3], short Rows, short Cols) {

    short min = matrix[0][0];
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (matrix[i][j] < min) {
                min = matrix[i][j];
			}
		}
	}

    return min;
}

int MaxNumberInMatrix(int matrix[3][3], short Rows, short Cols) {

	short max = matrix[0][0];
    for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
    }
    return max;
}

int main() {

    // Hardcoded matrix from the problem image (Note: includes 3 as minimum)
    int matrix1[3][3] = {
        {77, 5, 12},
        {22, 20, 6},
        {14, 3, 9}
    };

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    cout << "\nMinimum Number is: " << MinNumberInMatrix(matrix1, 3, 3) << endl;
    cout << "Max Number is: " << MaxNumberInMatrix(matrix1, 3, 3) << endl;

    return 0;
}