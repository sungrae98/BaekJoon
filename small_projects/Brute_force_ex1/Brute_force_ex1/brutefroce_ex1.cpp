#include<iostream>
using namespace std;

int main() {
	// 약수의 합을 구하기
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	cout << sum;
	return 0;
}