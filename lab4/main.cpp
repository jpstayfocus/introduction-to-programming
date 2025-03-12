/**
Lab 4

Program takes 10 elements from the user
if they are in ascending order, the sum is calculated and printed
otherwise, it will print not in order

program will compile and work as long as the values inputed are correct
*/

#include <iostream>

using namespace std;

int main (){

	//variable deceration
	const int MAX = 10;
	int data[MAX];
	int sum = 0;
	bool asc = true;

	cout << "Enter " << MAX << " elements:" << endl;

	for (int i = 0; i < MAX; i++)
    {
		cin >> data[i];
    }

	for (int i = 0; i < MAX; i++)
	{
		int j = i + 1;
		if (data[i] > data[j] && j < MAX)
		{
			asc = false;
			break;
		}
		else
			sum += data[i];
    }

	if (asc)
    {
		cout << "The values entered are in ascending order" << endl;
		cout << "The sum of the values are " << sum << endl;
	}
	else
		cout << "not in order" << endl;

	return 0;
}
