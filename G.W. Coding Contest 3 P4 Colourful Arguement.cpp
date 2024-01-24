#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string user_input;
	cin >> user_input;
	int year = stoi(user_input);
	bool f = true;
	while (true) {
		year++;
		user_input = to_string(year);
		for (int i = 1; i < user_input.length(); i++) {
			for (int j = i + 1; j <= user_input.length(); j++) {
				if (int(year % (int)pow(10, j) / pow(10, j - 1))
					== int(year % (int)pow(10, i) / pow(10, i - 1))) {
					f = false;
					i = user_input.length();
					break;
				}
			}
		}
		if (f) break;
		f = true;
	}
	cout << year << endl;
	return 0;
}