#include<iostream>
using namespace std;

int main() {
	//ù° �� n��
	int n;
	cin >> n;

	string str1, str2;
	cin >> str1 >> str2;

	//¦���̸� �״��, Ȧ���̸� ����
	if (n % 2 == 0) {
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] != str2[i]) {
				cout << "Deletion failed";
				return 0;
			}
		}
		cout << "Deletion succeeded";
	}
	else {
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] == str2[i]) {
				cout << "Deletion failed";
				return 0;
			}
		}
		cout << "Deletion succeeded";
	}
}