#include<iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	int result = 0;

	for (int i = 0; i < s.length(); i++) {
		int num = 1;
		int a = s[i] - 48;
		
		num = a * a * a * a * a;
		result += num;
	}

	cout << result << "\n";
}