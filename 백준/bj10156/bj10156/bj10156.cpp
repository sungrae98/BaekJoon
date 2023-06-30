#include<iostream>
#include<cmath>

using namespace std;

int calc(long k, long n, long m) {
	
	if (n * k > m) {
		return m - k * n;
	}
	else {
		return 0;
	}
	
}

int main() {
	//과자 한 개의 가격 K, 사려고 하는 과자의 개수 N, 현재 가진 돈 M
	long K, N, M;

	cin >> K >> N >> M;

	cout << abs(calc(K, N, M)) << "\n";
}