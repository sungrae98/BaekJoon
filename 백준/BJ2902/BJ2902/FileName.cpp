#include<iostream>
#include<cstring>
using namespace std;
int main() {
	
	string str;
	cin >> str;

	//�̸��� ù ����
	char c;
	cout << str[0];

	for (int i = 0; i < str.length(); i++) {

		if (str[i] == '-') {
			c = str[i + 1];
			cout << c;
		}
	}
}