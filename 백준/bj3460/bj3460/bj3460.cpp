#include<iostream>
using namespace std;

int main() {
	//�׽�Ʈ ���̽� t, ���� ���� n
	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		//��ġ�� �����ϴ� ����
		int index = 0;

		while (n != 0) {
			if (n % 2 == 1) {
				cout << index << ' ';
			}
			n = n / 2;
			index++;
		}
	}

	return 0;
}