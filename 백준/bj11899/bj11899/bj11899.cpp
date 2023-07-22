#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	string str;
	stack<char> c;
	//최소 개수
	int cnt = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			c.push(str[i]);
		}
		else {
			if (c.empty()) {
				cnt++;
			}
			else {
				c.pop();
			}
		}
	}

	cnt += c.size();
	cout << cnt << '\n';

	return 0;
}