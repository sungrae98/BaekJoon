#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	//ù �� N
	int N;
	cin >> N;

	//�Է� ����
	int num;
	//���� ����
	vector<int> v1, v2;

	for (int j = 0; j < N; j++) {
		cin >> num;
		v1.push_back(num);
	}
	for (int j = 0; j < N; j++) {
		cin >> num;
		v2.push_back(num);
	}

	//������������
	sort(v1.begin(), v1.end());

	//������������ �ϰ� ��������
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end());

	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += v1[i] * v2[i];
	}

	cout << sum << "\n";
}