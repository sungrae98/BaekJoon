#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//���� ���� N
	int N;
	cin >> N;

	//(x,y)�� �����ϴ� ����
	vector<pair<int, int>> v;

	//��ǥ �Է� �ޱ�
	int x, y;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(pair<int, int>(y, x));
	}

	//����-��������
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}