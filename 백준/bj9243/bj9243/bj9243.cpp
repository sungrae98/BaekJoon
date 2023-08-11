#include<iostream>
using namespace std;

int main() {
	//첫째 줄 n번
	int n;
	cin >> n;

	string str1, str2;
	cin >> str1 >> str2;

	//짝수이면 그대로, 홀수이면 반전
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