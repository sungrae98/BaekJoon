#include<iostream>
#include<vector>

using namespace std;

//�ִ�����
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
	//���� ���� n;
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		//�ٷ� �ִ������� ����ϴ� �Լ��� ȣ��
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