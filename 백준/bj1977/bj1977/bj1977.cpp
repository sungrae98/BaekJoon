#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	//m과 n 사이에 있는 완전제곱수 합을 출력
	//m, n은 10000이하

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