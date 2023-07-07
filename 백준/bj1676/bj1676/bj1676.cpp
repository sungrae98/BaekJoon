#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int result = 0;

	for (int i = 5; i <= n; i*=5) {
		result += n / i;
	}

	cout << result << "\n";
	return 0;
}