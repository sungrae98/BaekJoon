#include<iostream>
using namespace std;

int main() {
	int month, day;
	cin >> month >> day;

	if (month == 2) {
		if (day == 18) {
			cout << "Special" << '\n';
		}
		else if (day < 18) {
			cout << "Before" << '\n';
		}
		else {
			cout << "After" << '\n';
		}
	}
	else if (month < 2) {
		cout << "Before" << '\n';
	}
	else {
		cout << "After" << '\n';
	}
	return 0;
}