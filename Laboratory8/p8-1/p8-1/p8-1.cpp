#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int countVowel(string str) {
	int vowelcount = 0;
	for (int i = 0; i <= str[i]; i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
			|| str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			vowelcount++;
		}
	}
	return vowelcount;
}

int main() {
	string str;
	int vowelcount = 0;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q" || str == "q") {
			break;
		}
		else {
			cout << "Vowel count: " << countVowel(str) << endl;
			vowelcount = 0;
		}
	}
}