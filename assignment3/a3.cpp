/*
CS211 Assignment 3

Program takes user input for year, and the first day
Program outputs a calendar according to the user input

Program will compile and displays calendar as long as correct values are inputed by the user
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//reused code from example
int find_max_days(int month, int year) {

	int max_days;

	switch (month){

	case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 12: max_days = 31; break;

	case 4:	case 6:	case 9:	case 11: max_days = 30;	break;

	case 2:
		if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0)
			max_days = 28;
		else
			max_days = 29;
		break;

	default:
		break;
	}

	return max_days;
}

//reused code from example
string month_name(int month) {
	
	string mth;
	
	switch (month) {
	case 1:
		mth = "January";
		break;
	case 2:
		mth = "February";
		break;
	case 3:
		mth = "March";
		break;
	case 4:
		mth = "April";
		break;
	case 5:
		mth = "May";
		break;
	case 6:
		mth = "June";
		break;
	case 7:
		mth = "July";
		break;
	case 8:
		mth = "August";
		break;
	case 9:
		mth = "September";
		break;
	case 10:
		mth = "October";
		break;
	case 11:
		mth = "November";
		break;
	case 12:
		mth = "December";
		break;
	}
	return mth;
}

/*
reused most code from example
changed the cout to assigned to string var to return
pass pos by ref -> allows the draw_month to determine the end day of the printed month
*/
string day_of_week(int &pos) {

	string day;
	
	switch (pos % 7) {
	case 1:
		day = "Sunday";
		pos = 1;
		break;
	case 2:
		day = "Monday";
		pos = 2;
		break;
	case 3:
		day = "Tuesday";
		pos = 3;
		break;
	case 4:
		day = "Wednesday";
		pos = 4;
		break;
	case 5:
		day = "Thursday";
		pos = 5;
		break;
	case 6:
		day = "Friday";
		pos = 6;
		break;
	case 0:
		day= "Saturday";
		pos = 0;
		break;
	}

	return day;
}

//reused most of the code from example
void draw_month(int &first, int month, int year) {
	
	string mth = month_name(month);	
	cout << "\nCalendar for month " << mth << " of " << year << endl <<
		endl;
	cout << " Sun Mon Tue Wed Thu Fri Sat\n";

	int max_days = find_max_days(month, year);
	
	int day = 1;
	cout << setw(first * 4) << day;	// position the "1" under the right day of the week
	int pos = first;		// used to place the number in the correct column
	for (day = 2; day <= max_days; day++){				// loop to print all the days
		if (pos % 7 == 0)		// go to a new line at the end of the week
			cout << endl;
		cout << setw(4) << day;
		pos++;
	}
	cout << endl;
	
	//calculate the end of the month position
	string dayEndYr = day_of_week(pos);

	//pass this value back to first so it can be reused in the next iteration
	//incremented it first to ensure that the next month starts the next day
	first = ++pos;

	//print last day for the year if december
	if (month == 12) {
		cout << "\nThe year " << year << " ends on a " << dayEndYr << endl;
	}
}


int main(){
	
	int year;
	int first;
	
	cout << "Enter the year to print? ";	
	cin >> year;
	
	cout <<	"Enter the day of the week for the 1st January (1=Sun, 2=Mon etc) ";	
	cin >> first;

	for (int month = 1; month <= 12; month++)
		draw_month(first, month, year);

	cout << endl;
	system("Pause");

	return 0;
}
