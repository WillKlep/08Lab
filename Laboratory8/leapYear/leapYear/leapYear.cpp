#include <iostream>

using namespace std;

bool isLeapYear(int year) {
	if (year % 400 == 0) {
		return true;
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int year;

	while (true) {
		cout << "Enter the year or Q to quit: ";
		cin >> year;
		if (cin.fail()) {
			break;
		}
		else {
			if (isLeapYear(year) == true) {
				cout << year << " is a leap year." << endl;
			}
			else {
				cout << year << " is not a leap year." << endl;
			}
		}
	}
}