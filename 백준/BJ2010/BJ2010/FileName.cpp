#include<iostream>
using namespace std;

void count_plug(int& x) {
	int sum = 0 ; //��Ƽ�� ���� ��

	for (int i = 0; i < x; i++) {
		int plug;
		cin >> plug;
		sum += plug;
	}
	
	int total = sum - (x - 1);

	cout << total << endl;
}

int main() {
	int N; // ��Ƽ���� ����

	cin >> N;
	count_plug(N);
}