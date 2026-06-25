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
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

void multiplyMatricesElementWise(int matrix1[3][3], int matrix2[3][3], int resultsMatrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			resultsMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int matrix1[3][3];
    int matrix2[3][3];
	int resultsMatrix[3][3];
	FillMatrixWithRandomNumbers(matrix1, 3, 3);
	FillMatrixWithRandomNumbers(matrix2, 3, 3);
	cout << "Matrix 1:\n";
	PrintMatrix(matrix1, 3, 3);
	cout << "\nMatrix 2:\n";
	PrintMatrix(matrix2, 3, 3);
	multiplyMatricesElementWise(matrix1, matrix2, resultsMatrix);
	cout << "Results:\n";
	PrintMatrix(resultsMatrix, 3, 3);

    return 0;
}