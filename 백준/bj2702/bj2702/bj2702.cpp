#include<iostream>
using namespace std;

//��Ŭ���� ȣ����
int gcd(int a, int b) {
	int c;
	
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main() {
	//�׽�Ʈ ���̽��� ����
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;

		int result = gcd(a, b);
		int lcm = a * b / gcd(a, b);

		cout << lcm << " " << result << '\n';
	}

	return 0;
}