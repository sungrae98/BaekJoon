#include<iostream>
using namespace std;

int main() {
	//�׽�Ʈ ���̽��� ���� k
	int k;
	cin >> k;
	//������ p �ڸ� �� m
	int p, m;

	for (int i = 0; i < k; i++) {
		cin >> p >> m;
		bool arr[501] = {};

		//�������� ���ϴ� ����� ��
		int cnt = 0;
		
		for (int j = 0; j < p; j++) {
			//���ϴ� �ڸ�
			int seat;
			cin >> seat;

			if (arr[seat] != 1) {
				arr[seat] = 1;
			}
			else {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}