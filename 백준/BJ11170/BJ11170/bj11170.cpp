#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		int result = 0;// 0�� ���� ���

		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			if (j == 0) {
				result++;
			}

			int tmp = j;
			// 10���� ������ �� �������� 0�̸� 0�� ������ �ִٴ� ���̴�.
			while (tmp > 0)
			{
				if (tmp % 10 == 0) {
					result++;
				}
				tmp /= 10;
			}
		}
		cout << result << '\n';
	}
	return 0;
}