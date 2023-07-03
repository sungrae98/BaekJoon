#include<iostream>
#include<vector>

using namespace std;

//최대공약수
int gcd(int a, int b) {
	int mod = a % b;

	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}

	return b;
}

int main() {
	//링의 개수 n;
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		//바로 최대공약수를 계산하는 함수를 호출
		int radius;
		cin >> radius;

		v[i] = 2 * radius;
	}

	for (int i = 1; i < n; i++) {
		int divisor = gcd(v[0], v[i]);

		cout << v[0] / divisor << "/" << v[i] / divisor << "\n";
	}
	return 0;
}