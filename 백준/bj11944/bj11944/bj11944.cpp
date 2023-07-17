#include<iostream>
#include<string>

using namespace std;

int main() {
	//n, m
	string str;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		str += to_string(n);

		if (str.length() >= m) {
			str = str.substr(0, m);
			break;
		}
	}
	
	cout << str << '\n';

	return 0;
}