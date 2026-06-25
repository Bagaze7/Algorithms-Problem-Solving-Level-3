#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short
	Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

	
void TransposeMatrix(int arr[3][3],int TransposedArr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			TransposedArr[i][j] = arr[j][i];
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

int main()
{
	int arr[3][3];
	int TransposedArr[3][3];
	// تعديل النص ليكون متناسقاً مع مصفوفة مرتبة
	cout << "\nThe following is a 3x3 ordered matrix: \n";

	FillMatrixWithOrderedNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	TransposeMatrix(arr, TransposedArr, 3, 3);
	cout << "\nThe following is the transposed matrix: \n";

	PrintMatrix(TransposedArr, 3, 3);

	system("pause>0");
}