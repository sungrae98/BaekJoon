#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//����� �� N
	int N;
	cin >> N;

	vector <int> v;

	for (int i = 0; i < N; i++) {
		//���� �����ϴµ� �ɸ��� �ð� p
		int p;
		cin >> p;

		v.push_back(p);
	}

	sort(v.begin(), v.end());

	//���� �����ϴ� ����
	int sum = 0;

	for (int j = 0; j < N; j++) {
		//�ð��� ���� �ּڰ��� ���� ���� ���� ���� N - (�ε��� ��ȣ)j ��ŭ ��������.
		sum += v[j] * (N - j);
	}

	cout << sum << "\n";
}