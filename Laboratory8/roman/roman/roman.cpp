#include <iostream>
#include <string>

using namespace std;

int romanToInt(char r); //prototype

int romanToInt(char r) {
	if (r == 'I') {
		return 1;
	}
	else if (r == 'V') {
		return 5;
	}
	else if (r == 'X') {
		return 10;
	}
	else if (r == 'L') {
		return 50;
	}
	else if (r == 'C') {
		return 100;
	}
	else if (r == 'D') {
		return 500;
	}
	else if (r == 'M') {
		return 1000;
	}
	else {
		return 0;
	}
}

int convertRomanToInt(string s) {
	int total = 0, firstLetter, secondLetter;

	for(int i = 0; s[i] != '\0'; i++) {

		firstLetter = romanToInt(s[i]); //set first letter equal to first letter in string s
		secondLetter = romanToInt(s[i+1]);

		if (firstLetter >= secondLetter || s[i + 2] == '\0') { //haha, forgetting that = in firstLetter >= secondLetter screwed me
			total = total + firstLetter;
		}
		else {
			total = total + (secondLetter - firstLetter);
			i++;
		}
	}
	return total;
}

int main() {
	string romanNum;
	bool done = false;

	while (!done) {
		cout << "Enter Roman number or Q to quit: ";
		getline(cin, romanNum);
		if (romanNum == "Q" || romanNum == "q") {
			done = true;
			break;
		}
		else {
			int num = convertRomanToInt(romanNum);
			if (num != 0) {
				cout << romanNum << " = " << num << endl;
			}
		}
	}
}
//TEST DATA (this is how the output should look)
//Enter Roman number or Q to quit : I
//I = 1
//Enter Roman number or Q to quit : V
//V = 5
//Enter Roman number or Q to quit : X
//X = 10
//Enter Roman number or Q to quit : L
//L = 50
//Enter Roman number or Q to quit : C
//C = 100
//Enter Roman number or Q to quit : D
//D = 500
//Enter Roman number or Q to quit : M
//M = 1000
//Enter Roman number or Q to quit : MCMLXII
//MCMLXII = 1962
//Enter Roman number or Q to quit : MDCCCLXXXVIII
//MDCCCLXXXVIII = 1888
//Enter Roman number or Q to quit : Q