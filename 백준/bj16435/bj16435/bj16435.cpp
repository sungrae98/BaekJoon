#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//������ ����
	int N;
	cin >> N;
	//������ũ������ �ʱ� ����
	int L;
	cin >> L;

	vector<int> height(N);

	for (int i = 0; i < N; i++) {
		cin >> height[i];
	}

	//������ �Է¼����� �Դ� ���� �ƴϱ� ������ �������� ������ �ʿ��ϴ�.
	sort(height.begin(), height.end());
	
	for (int i = 0; i < N; i++) {
		if (L >= height[i]) {
			L++;
		}
	}

	cout << L << "\n";
}