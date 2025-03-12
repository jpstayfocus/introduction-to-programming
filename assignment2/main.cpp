/**
inline comments
*/

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int yr, mon, startD;

	cout << "Please enter the year" << endl;
	cin >> yr;

	cout << "Please enter the month (1-12)" << endl;
	cin >> mon;

	cout << "Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7" << endl;
	cout << "Please enter the day of the start of the month (1-7)" << endl;
	cin >> startD;


	int days;

	//Check days in months for 30-31 in month
	switch (mon) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;

	case 2:
		if (((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0))
			days = 29;
		else
			days = 28;
		break;

	default:
		days = 30;
	}

	//print header
	cout << left << "Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
	cout << left << "---------------------------------" << endl;

	bool sLoop = true;

	for (int i = 1; i <= days; i++) {
		//condition to pad
		if (startD != 1 && sLoop) {

			for (int j = 0; j < startD; j++)
				cout << setw(4) << left << " ";
			
			switch (startD)
			{
			case 2:
				cout << "\b\b";
				break;
			case 3:
				cout << "\b";
				break;
			case 6:
				cout << " ";
				break;
			case 7:
				cout << "  ";
				break;
			default:
				break;
			}
			
			sLoop = false;
		}

		cout << setw(4) << left << i << " ";
		//condition to end line

		if ((i + startD - 1) % 7 == 0) {
			cout << endl;
		}
	}

	// end day month calc
	int lastD = startD + days - 1;

	string endDate;

	switch (lastD % 7) {
	case 1:
		endDate = "Sunday";
		break;
	case 2:
		endDate = "Monday";
		break;
	case 3:
		endDate = "Tuesday";
		break;
	case 4:
		endDate = "Wednesday";
		break;
	case 5:
		endDate = "Thursday";
		break;
	case 6:
		endDate = "Friday";
		break;
	default:
		endDate = "Saturday";
	}

	cout << endl << "The month ends on a " << endDate << ".\n";

	system("PAUSE");

	return 0;
}
