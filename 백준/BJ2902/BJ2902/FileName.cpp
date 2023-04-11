#include<iostream>
#include<cstring>
using namespace std;
int main() {
	
	string str;
	cin >> str;

	//이름의 첫 글자
	char c;
	cout << str[0];

	for (int i = 0; i < str.length(); i++) {

		if (str[i] == '-') {
			c = str[i + 1];
			cout << c;
		}
	}
}