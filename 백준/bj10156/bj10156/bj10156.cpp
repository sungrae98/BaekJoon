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
	//���� �� ���� ���� K, ����� �ϴ� ������ ���� N, ���� ���� �� M
	long K, N, M;

	cin >> K >> N >> M;

	cout << abs(calc(K, N, M)) << "\n";
}