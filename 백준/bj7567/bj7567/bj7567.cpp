#include<iostream>
using namespace std;

int main() {
	
	// �׸� ���� �Է� �ޱ�
	string str;
	cin >> str;
	
	int height = 0;

	for (int i = 0; i < str.length(); i++) {
		if (i == str.length()) {
			break;
		}
		if (str[i] == str[i + 1]) {
			height += 5;
		}
		else {
			height += 10;
		}
	}

	cout << height;
}