#include<iostream>
using namespace std;

void printBigger(int& x, int& y) {
	if (x > y) {
		cout << "ū ���� " << x << "�Դϴ�." << endl;
	}
	else {
		cout << "ū ���� " << y << "�Դϴ�." << endl;
	}
}

int main() {
	int a, b; //�Է� ���� 2���� ����

	cout << "ù ��° ���ڸ� �Է��ϼ���: " << endl;
	cin >> a;

	cout << "�� ��° ���ڸ� �Է��ϼ���: " << endl;
	cin >> b;

	printBigger(a, b);

	return 0;
}