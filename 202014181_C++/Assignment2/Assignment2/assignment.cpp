#include <iostream>
using namespace std;

int sum(int x, int y) {
	int i, result = 0;

	for (i = x; i <= y; i++) {
		result += i;
	}

	return result;
}

int main() {
	int n = 0;
	cout << "������ ���� �Է��ϼ���>> ";
	cin >> n;

	cout << "1���� " << n << "������ ���� " << sum(1,n);

	return 0;
}