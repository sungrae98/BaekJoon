#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	//�׽�Ʈ ���̽� ���� t
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		//�Ÿ��� ��
		int sum = 0;

		//�湮�� ������ �� n
		int n;
		cin >> n;

		vector<int> v(n);

		//���� ��ǥ �Է�
		for (int j = 0; j < n; j++) {
			cin >> v[j];
		}

		//�������� ����
		sort(v.begin(), v.end());

		for (int j = 1; j < n; j++) {
			//���ۺ��� ����� ������� ���̸�ŭ ������
			sum = sum + (v[j] - v[j - 1]);
		}

		cout << sum * 2 << "\n";
	}

	return 0;
}