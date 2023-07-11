#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int sum = 5;

	for (int i = 2; i <= n; i++) {
		sum += (3 * i + 1);

		sum = sum % 45678;
	}

	cout << sum << '\n';

	return 0;
}