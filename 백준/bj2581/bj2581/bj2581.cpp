#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int min = -1;
	//����� ����
	int count = 0;
	//���� ����
	int sum = 0;

	for (int i = m; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}

		//�Ҽ��� ��
		if (count == 2) {
			if (min == -1) {
				min = i;
			}
			sum += i;
		}
		count = 0;
	}

	if (min == -1) {
		cout << -1 << '\n';
	}
	else {
		cout << sum << '\n' << min;
	}
	return 0;
}