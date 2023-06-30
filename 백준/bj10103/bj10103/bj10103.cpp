#include<iostream>

using namespace std;

int main() {
	//라운드의 수 n
	int n;
	cin >> n;

	int chang = 100;
	int sang = 100;

	for (int i = 0; i < n; i++) {
		int ch, s;
		cin >> ch >> s;

		if (ch > s) {
			sang -= ch;
		}
		else if (ch == s) {

		}
		else {
			chang -= s;
		}
	}

	cout << chang << "\n" << sang << "\n";
}