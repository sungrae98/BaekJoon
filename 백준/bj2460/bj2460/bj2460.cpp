#include<iostream>
using namespace std;

int main() {
	//���� ���, ź ����� �迭�� ����
	int out[10], in[10];
	//max�� �ִ� ��, sum�� ������ Ÿ�� �ִ� ��� �� 
	int max = 0, sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> out[i] >> in[i];
		sum = -out[i] + in[i] + sum;

		if (max < sum) {
			max = sum;
		}
	}

	cout << max << endl;
}