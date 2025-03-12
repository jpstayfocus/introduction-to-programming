/*
Lab 5

Program will verify if a square of size n between 3-5
it the values in the square are a magic square
using 4 functions to verify if the sums are equal to
the magic constant

program will compile and work as long as the values inputed are correct
*/

#include <iostream>

using namespace std;

const int S5 = 5;


//function used to calculate the magic constant from the user input n
int magicConstant(int n) {
	int ret;

	ret = (n*n + 1)*n / 2;

	return ret;
}

//function to read the values in the square provided by the user
void readSquare(int square[][S5], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Enter the value for the location " << i << " , " << j << endl;
			cin >> square[i][j];
		}
	}
}

//function to calculate the left to right diagonal sum in the square
int leftRightDiagonalSum(int square[][S5], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += square[i][i];
	}

	return sum;
}

//function to calculate the right to left diagonal sum in the square
int rightLeftDiagonalSum(int square[][S5], int n) {
	int sum = 0;

	for (int i = n - 1, j = 0; i >= 0 && j < n; i--, j++) {
		sum += square[j][i];		
	}

	return sum;
}

//function to calculate a provided column sum in the square
int columnSum(int square[][S5], int n, int columnNumber) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += square[i][columnNumber];
	}

	return sum;
}

//function to calculate a provided row sum in the square
int rowSum(int square[][S5], int n, int rowNumber) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += square[rowNumber][i];
	}

	return sum;
}

//function to determine if the values in the square are equal
bool validMagicSquare(int square[][S5], int n) {

	bool ret = false;

	int magic = magicConstant(n);
	
	//iterate into each column and row to check the sum value by function call
	for (int i = 0; i < n; i++) {		
		if ((magic == columnSum(square, n, i)) && (magic == rowSum(square, n, i))) {
			ret = true;
		}
	}

	//if the columns and rows were equal check if the diagonals are also equal
	if (ret) {
		if (magic != leftRightDiagonalSum(square, n) || magic != rightLeftDiagonalSum(square, n)) {
			ret = false;
		}		
	}
	
	return ret;
}

int main() {

	//variable intiation
	int temp[S5][S5];
	int sqSize;

	//prompt user for square size
	cout << "What is the size of the magic square?" << endl;
	cin >> sqSize;

	//call function to get the values in the square
	readSquare(temp, sqSize);

	//call function to check if the values in the square are equal
	//print according to the condition returned from function
	if (validMagicSquare(temp, sqSize)) {
		cout << "This is a magic square" << endl;
	}
	else {
		cout << "Not a magic square" << endl;
	}

	system("Pause");

	return 0;
}
