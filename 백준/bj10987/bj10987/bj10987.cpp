#include<iostream>
#include<string>
using namespace std;

int main() {
	char vowel[6] = { 'a','e','i','o','u' };

	string str;
	cin >> str;

	int cnt = 0;

	for (int j = 0; j < 6; j++) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == vowel[j]) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
}