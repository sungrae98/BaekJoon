#include<iostream>
#include<vector>

using namespace std;

//Greatest Common Divisor
int gcd(int x, int y) {
	if ( x % y == 0) {
		return y;
	}
	else {
		return gcd(y, x % y);
	}

}
int main() {

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	//테스트 케이스 t
	int t;
	cin >> t;

	while (t--) {
		//각 테스트 케이스 수 n
		int n;
		cin >> n;

		vector<int> v(n);
		for (int j = 0; j < n; j++) {
			cin >> v[j];
		}

		//gcd를 저장할 변수, int의 범위를 초과함
		//long long의 표현범위는 +-900경
		long long sum = 0;

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(v[i], v[j]);
			}
		}

		cout << sum << '\n';
	}
	return 0;
}