/**
Lab 3

Program using nested for loops that calculates the sum of each n lines of numbers
*/
#include <iostream>
#include <string>

using namespace std;

int main (){
	
	///initialize variables for the lines and numbers
	int line, numbers;

	///prompt user for the lines
	cout << "Enter an integer n for the lines" << endl;
	cin >> line;

	///prompt user for the numbers in each line
	cout << "Enter an integer m for the numbers in each line n" << endl;
	cin >> numbers;

	//start outter loop for the lines
	for (int i = 0; i < line; i++){
		//initialize sum variable
		int sum = 0;
		//prompt user for the numbers
		cout << "Enter " << numbers << " numbers: ";
		
		//inner loop for each number
		for (int j = 0; j < numbers; j++){	
			//initialize new variable to ensure no residual carry over
			int inp;
			cin >> inp;
			//add them to sum variable
			sum += inp;
		}
		//display sum of each line
		cout << "Sum = " << sum << endl;
	}
	
	return 0;
}
