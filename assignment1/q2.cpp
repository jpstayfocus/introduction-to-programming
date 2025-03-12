/**
CS211 Assignment 1 Question 2

Oct 11 2021

Program takes inputs from the keyboard by the user to output according calculations
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

	///variables declaration
    int a,b,c;
	bool neg = false;
	
    
	///prompt user input
    cout << "The quadratic equation" << endl;
	cout << "ax^2+bx+c = 0" << endl << endl;
	
	cout << "Enter the coefficient value of a: " << endl;
    cin >> a;
    
    cout << "Enter the coefficient value of b: " << endl;
    cin >> b;
    
    cout << "Enter the coefficient value of c: " << endl;
	cin >> c;
    
	///variables declaration and calculations
	double ans1, ans2;
	double root = (b*b)-(4*a*c);
	
	///Determining if sqrt will be in real values
	if(root >= 0){		
		root = sqrt(root);
	}
	else {
		neg = true;
	}
	
    
	///program output of calculations
	cout << endl << "*********************************" <<endl;
	if(neg || a == 0){
		cout << "No real roots" << endl;
	} else {
		ans1 = ((-1*b)-root)/(2*a);
		ans2 = ((-1*b)+root)/(2*a);
		cout << "1st root : " << ans1 <<endl;
		cout << "2nd root : " << ans2 <<endl;
	}
    
    return 0;
}

