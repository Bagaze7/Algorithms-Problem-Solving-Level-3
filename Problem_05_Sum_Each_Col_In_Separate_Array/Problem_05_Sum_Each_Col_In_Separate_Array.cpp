#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
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
int ColSum(int arr[3][3], short Rows, short ColNumber) {
	int sum = 0;
	for (short i = 0; i < Rows; i++) {
		sum += arr[i][ColNumber];
	}
	return sum;
}
void FillColsSumArray(int arr[3][3], short Rows, short Cols,int newArr[3]) {
	for (short i = 0; i < Cols; i++) {
		newArr[i] = ColSum(arr, Rows, i);
	}
}
void PrintColSum(int arr[3], short arrLength) {
	cout << "\nThe the following are the sum of each col in the matrix:\n";
	for (short i = 0; i < arrLength; i++) {
		cout << "The sum of column " << i + 1 << " is: " << arr[i] << "\n";
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	int newArr[3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);
	FillColsSumArray(arr, 3, 3, newArr);
	PrintColSum(newArr, 3);
	system("pause>0");
}