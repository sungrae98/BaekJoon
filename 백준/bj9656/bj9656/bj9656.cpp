#include<iostream>

using namespace std;

int main() {
	//���� ���� n
	int n;
	cin >> n;

	if (n % 2 == 0) {
		//¦���� �� ��� ��
		cout << "SK";
	}
	else {
		//Ȧ���� �� â�� ��
		cout << "CY";
	}
	return 0;
}