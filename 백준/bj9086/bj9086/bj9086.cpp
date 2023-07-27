#include<iostream>
#include<string>
using namespace std;

int main() {
	//테스트 개수
	int t;
	cin >> t;
	string str;

	while (t--) {
		cin >> str;
		cout << str[0] << str[str.size() - 1] << '\n';
	}
	return 0;
}