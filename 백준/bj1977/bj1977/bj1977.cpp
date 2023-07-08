#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	//m�� n ���̿� �ִ� ���������� ���� ���
	//m, n�� 10000����

	int sum = 0;
	int min = 10000;

	for (int i = 1; i <= 100; i++) {
		int result = i * i;
		if (result >= m && result <= n) {
			sum += result;
			if (min > result) {
				min = result;
			}
		}
		else if (result >= n) {
			break;
		}
	}

	if (sum == 0) {
		cout << "-1" << "\n";
	}
	else {
		cout << sum << "\n";
		cout << min << "\n";
	}

	return 0;
}