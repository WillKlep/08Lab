#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int dayOfWeek(int month, int day, int year); //prototypes
int printHeader();
int printCal(int month, int year);


int dayOfWeek(int month, int day, int year) {
	if (month == 1) {
		month = 13;
		year--;
	}
	else if (month == 2) {
		month = 14;
		year--;
	}

	int h = (day + (((month + 1) * 26) / 10) + year + (year / 4) + 6 * (year / 100) + (year / 400)) % 7;
	h;
	return h;
}

//int printHeader() {
//	
//}

//int printCal(int month, int year) {
//
//}

int main() {

	int maxDays, month, year, day, firstDay;
	while (true) {
		cout << "Enter a month and year: ";
		cin >> month >> year;
		if (cin.fail()) {
			break;
		}
		else {
			day = 1;
			firstDay = dayOfWeek(month, day, year);

			if (month == 1) {
				cout << "January";
			}
			else if (month == 2) {
				cout << "Feburuary";
			}
			else if (month == 3) {
				cout << "March";
			}
			else if (month == 4) {
				cout << "April";
			}
			else if (month == 5) {
				cout << "May";
			}
			else if (month == 6) {
				cout << "June";
			}
			else if (month == 7) {
				cout << "July";
			}
			else if (month == 8) {
				cout << "August";
			}
			else if (month == 9) {
				cout << "September";
			}
			else if (month == 10) {
				cout << "Feburuary";
			}
			else if (month == 11) {
				cout << "November";
			}
			else {
				cout << "December";
			}
			cout << " " << year << endl;

			 cout << "Su\t" << "Mo\t" << "Tu\t" << "We\t" << "Th\t" << "Fr\t" << "Sa" << endl;

			if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0) && (month == 2)) {
			 maxDays = 29;
			}
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				maxDays = 31;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				maxDays = 30;
			}
			else if (month == 2) {
				maxDays = 28;
			}

				int offset = firstDay;
				
				for (int i = 1; i < offset; i++) {
					if (firstDay == 6) {
						cout.width(20); cout << "\t" << right;
					}
					else {
						cout << "\t";
					}
				}
				for (int j = 1; j <= maxDays; j++) {
					if (firstDay == 6) {
						cout.width(20); cout << j << "\t" << right;
					}
					cout << j << "\t";
					if ((offset + j - 1) % 7 == 0) {
						cout << endl;
					}
					/*else if (maxDays == 0) {
						cout << endl;
					}*/
				}
				cout << endl;
		}
	}
	//cout << "Su\t" << "Mo\t" << "Tu\t" << "We\t" << "Th\t" << "Fr\t" << "Sa" << endl; 

}
