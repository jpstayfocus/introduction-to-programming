/**
Lab 1
Program takes inputs from the keyboard by the user to output according calculations
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

	///variables declaration
    string lName;
    int familySize;
    double income;
    double debts;
	
	///const declaration for calculations
	const int EXP = 3000;
	const double SAV = 0.02;
    
	///prompt user input
    cout << "What is your family name?" << endl;
    cin >> lName;
    
    cout << "How many members are in your family?" << endl;
    cin >> familySize;
    
    cout << "What is the total family income?" << endl;
	cin >> income;
    
    cout << "What is the family debt?" << endl;
	cin >> debts;
    
	///variables declaration and calculations
	double expenses = EXP * familySize;
    double payments = debts / 12.0;
    double savings = familySize*(SAV*(income-debts));
    
	///program output of calculations
	cout << endl << "*******************************" << endl;
	cout << "Family Budget Assistance Center" << endl;	
	cout << "*******************************" << endl << endl;
    
	cout << "Program assement for " << lName << endl;
	cout << "Number of family members: " << familySize << endl;
	cout << fixed << setprecision(2) << "Family income: $" << income << endl;
	cout << fixed << setprecision(2) << "Family debts: $" << debts << endl;
	
	cout << "*******************************" << endl;
	cout << fixed << setprecision(2) << "Predicted family living expenses: $" << expenses << endl;
	cout << fixed << setprecision(2) << "The monthly payments necessary to pay off the debt in one year: $" << payments << endl;	
	cout << fixed << setprecision(2) << "The amount of money your family should save: $" << savings << endl;
    
    return 0;
}
