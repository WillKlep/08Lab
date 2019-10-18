#include <iostream>

using namespace std;

int dayOfWeek(int month, int day, int year); //prototype

int dayOfWeek(int month, int day, int year) {
	/**
   dayOfWeek - Computes the weekday of a given date.
   @param year the year
   @param month the month (1 = January ... 12 = December)
   @param day the day of the month
   @return the weekday (0 = Sunday ... 6 = Saturday)
*/
	if (month == 1) {
		month = 13;
		year--;
	}
	else if (month == 2) {
		month = 14;
		year--;
	}

	int h = (day + (((month + 1) * 26) / 10) + year + (year / 4) + 6 * (year / 100) + (year / 400)) % 7;
	h ;
	return h;
}

int main() {
	int day, month, year;
	int days;

	while (true) {
		cout << "Enter a date or Q to quit: ";
		cin >> month >> day >> year;

		if (cin.fail()) {
			break;
		}
		else {
			days = dayOfWeek(month, day, year);
			if (days == 0) {
				cout << "Saturday, ";
			}
			else if(days == 1){
				cout << "Sunday, ";
			}
			else if (days == 2) {
				cout << "Monday, ";
			}
			else if (days == 3) {
				cout << "Tuesday, ";
			}
			else if (days == 4) {
				cout << "Wednesday, ";
			}
			else if (days == 5) {
				cout << "Thursday, ";
			}
			else if (days == 6) {
				cout << "Friday, ";
			}
			else {
				cout << "Not a valid day.";
			}

			if (month == 1 || month == 13) {
				cout << "January ";
			}
			else if (month == 2 || month== 14) {
				cout << "February ";
			}
			else if (month == 3) {
				cout << "March ";
			}
			else if (month == 4) {
				cout << "April ";
			}
			else if (month == 5) {
				cout << "May ";
			}
			else if (month == 6) {
				cout << "June ";
			}
			else if (month == 7) {
				cout << "July ";
			}
			else if (month == 8) {
				cout << "August ";
			}
			else if (month == 9) {
				cout << "September ";
			}
			else if (month == 10) {
				cout << "October ";
			}
			else if (month == 11) {
				cout << "November ";
			}
			else if (month == 12) {
				cout << "December ";
			}

			cout << day << ", " << year << endl;
		}
	}
}