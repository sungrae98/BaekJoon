#include<iostream>
using namespace std;

int main() {
	int a[10] = { 0, };
	int b[10] = { 0, };

	int score_a = 0, score_b = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			score_a++;
		}
		else if (a[i] < b[i]) {
			score_b++;
		}
	}

	if (score_a > score_b) {
		cout << 'A' << '\n';
	}
	else if (score_a == score_b) {
		cout << 'D' << '\n';
	}
	else {
		cout << 'B' << '\n';
	}
	return 0;
}