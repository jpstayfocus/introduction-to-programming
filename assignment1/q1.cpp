/**
CS211 Assignment 1 Question 1

Oct 11 2021

Program takes inputs from the keyboard by the user to output according calculations
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    ///variables declaration
    string eName;
    int hWork;
    double hRate;

    ///const declaration for calculations
    const double EMPINS = 0.024;
    const double UNIDUE = 0.01;
    const double TAX = 0.17;

    ///prompt user input
    cout << "Enter the employee name" << endl;
    cin >> eName;

    cout << "How many hours worked?" << endl;
    cin >> hWork;

    cout << "What is the hourly rate?" << endl;
    cin >> hRate;

    ///variables declaration and calculations
    double gPay = hWork * hRate;

    double unionD = gPay * UNIDUE;
    double empInsD = gPay * EMPINS;
    double taxD = gPay * TAX;

    double tDeductions = unionD + empInsD + taxD;
    double nPay = gPay - tDeductions;

    ///program output of calculations
    cout << endl << "*********************************" << endl;
    cout << "Employee name: " << eName << endl;
    cout << "Hours worked: " << hWork << endl;
    cout << "Hourly rate: " << hRate << endl;

    cout << fixed << setprecision(2) << endl << "Gross Pay: " << gPay << endl;

    cout << fixed << setprecision(2) << endl << "Deductions:" << endl;
    cout << fixed << setprecision(2) << "\tUnion dues " << unionD << endl;
    cout << fixed << setprecision(2) << "\tEmployment insurance " << empInsD << endl;
    cout << fixed << setprecision(2) << "\tTaxes " << taxD << endl;

    cout << fixed << setprecision(2) << endl << "Total Deductions: " << tDeductions << endl;

    cout << fixed << setprecision(2) << endl << "Net Pay: " << nPay << endl;

    return 0;
}

