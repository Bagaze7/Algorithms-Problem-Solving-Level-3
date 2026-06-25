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
	for (int i = 0; i < Rows; i++) {
		sum += arr[i][ColNumber];
	}
	return sum;
}
void PrintColSum(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Cols; i++) {
		cout << "The sum of column " << i + 1 << " is: " << ColSum(arr, Rows, i) << endl;
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);
	PrintColSum(arr, 3, 3);
	system("pause>0");
}