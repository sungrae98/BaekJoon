#include<iostream>
using namespace std;

int main() {
	// å 10���� �� ����
	int total_price;

	cin >> total_price;

	//å 9���� ������ ���ļ� ������ ����
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		int price;
		cin >> price;
		sum += price;
	}

	cout << total_price - sum;
}