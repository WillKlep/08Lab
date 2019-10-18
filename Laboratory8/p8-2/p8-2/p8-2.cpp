#include <iostream>
#include <string>

using namespace std;

int countWords(string str); //prototype

int countWords(string str) {
	int wordCount = 0;
	for (int i = 0; i <= str[i]; i++) {
		if (str[i] == ' ' && (str[i+1] != ' ')) {
			wordCount++;
		}
	}
	return wordCount + 1;
}

int main() {
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q" || str == "q") {
			break;
		}
		else {
			cout << "Word cout: " << countWords(str) << endl;
		}
	}
}