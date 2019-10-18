#include <iostream>

using namespace std;

bool isTurnScoreLost(int die1value, int die2value) {
	if (die1value == 1 || die2value == 1) {
		return true;
	}
	else return false;
}

bool isGameScoreLost(int die1value, int die2value) {
	if (die1value == 1 && die2value == 1) {
		return true;
	}
	else return false;
}


int main() {
	int dice1, dice2;
	bool done = false;

	while (!done) {
		cout << "Enter die1 and die2 values (Q to quit): ";
		cin >> dice1 >> dice2;
		if (cin.fail()) {
			done = true;
			break;
		}
		else {
			cout << "isTurnScoreLost = ";
			if (isTurnScoreLost(dice1, dice2) == true) {
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}

			cout << "isGameScoreLost = ";
			if (isGameScoreLost(dice1, dice2) == true) {
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}
		}
	}
}

//print out all possible outcomes of two dice rolls 1-6, and test both for TurnScore and GameScore
//will need two for loops
//list = []
//list.append(die1)
//list.append(die2)
//for i in range(0,2):
	//for j in range(0,2):
		//if(die1 != die2)
//cout << list[die1] << list[die2]