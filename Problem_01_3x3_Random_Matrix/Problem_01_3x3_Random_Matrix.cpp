#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

int RandomNumber(int min, int max) {
	return rand() % (max - min + 1) + min;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
int main() {
	srand((unsigned)time(NULL));
	int matrix[3][3];

    cout << "\n The following is a 3x3 random matrix:" << endl;
	FillMatrixWithRandomNumbers(matrix, 3, 3);
	PrintMatrix(matrix, 3, 3);
	return 0;
}
