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
bool CompareArrayElement( int arr[3], short Cols) {
    int count = Cols;
	for (short i = 0; i < Cols; i++) {
		if (arr[i] != arr[count - 1]) {
			return false;
		}
		count--;
	}
	return true;
        
}   

void ConvertRowToArray(int matrix[3][3], int row, int arr[3]) {
	for (short j = 0; j < 3; j++) {
		arr[j] = matrix[row][j];
	}
}
bool IsPalindromeMatrix(int matrix[3][3], short Rows, short Cols) {
    int arr[3];
	for (short i = 0; i < Rows; i++) {
		ConvertRowToArray(matrix, i, arr);
		if (!CompareArrayElement(arr, Cols)) {
			return false;
		}
	}

	return true;
}



int main() {

    // Hardcoded matrix to test Palindrome condition
    int matrix1[3][3] = {
        {1, 2, 1},
        {5, 5, 5},
        {7, 3, 7}
    };

    cout << "Matrix1:\n";
    PrintMatrix(matrix1, 3, 3);

    if (IsPalindromeMatrix( matrix1, 3, 3 )) {
        cout << "\nYES: Matrix is Palindrome.\n";
    }
    else {
        cout << "\nNo: Matrix is NOT Palindrome.\n";
    }

    return 0;
}