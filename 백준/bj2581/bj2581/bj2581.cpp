#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int min = -1;
	//약수의 개수
	int count = 0;
	//합을 저장
	int sum = 0;

	for (int i = m; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}

		//소수일 때
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