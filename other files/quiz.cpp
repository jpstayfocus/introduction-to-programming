/*
Quiz instructions
Write a program that:
1) Generates 10 random numbers between 5 and 15
2) Stores the generated numbers in a 1D array
3) Calculates and displays how many numbers are duplicated in the array (appear more than once). If a duplicate is found you are allowed to change its value
4) Calculates and displays  the sum of elements in the array without counting the duplicates more than once.

Example:
if Array is:  15 8 6 5 10 9 11 8 8 10
Number of duplicates :  2 (8 and 10)
Sum is : 15 + 8 + 6 + 5 + 10 + 9 + 11 = 64
Important: Do not write the include section. Your answer should contain the main() only
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	//seed value for random time
	srand(time(0));
	
	//const value for array max size
	const int AMAX = 10;
	//variable decelartion
	int dupC = 0;
	int sum = 0;
	//array of max size
	int ranNum[AMAX];
	
	//insert random ints to array then display then to user
	cout << "The array contains the following elements: " << endl;
	for (int i = 0; i < AMAX; i++) {
		//formula for values between 5-15 inclusive
		int randN = rand() % (16 - 5) + 5;
		ranNum[i] = randN;
		cout << ranNum[i] << " ";
	}
	cout << endl;

	/*
	2 for loops to check for duplicates
	if a duplicate is found, we set that value to 0
	*/
	for (int i = 0; i < AMAX; i++) {
		for (int j = i + 1; j < AMAX; j++) {
			if (ranNum[i] == ranNum[j] && j != i && ranNum[j] != 0) {				
				ranNum[j] = 0;
				dupC++;
			}
		}
	}
	//display the total number of elements that are duplicated
	cout << "Number of duplicated elements: " << dupC << endl;
	
	//calculate the sum in the array for elements that are not 0
	for (int i = 0; i < AMAX; i++) {
		if (ranNum[i] != 0)
			sum += ranNum[i];
	}

	cout << "The sum of the elements in the array without duplicates is : " << sum << endl;
	
	cout << endl;

	system("Pause");

	return 0;
}
