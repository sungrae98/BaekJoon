#include<iostream>
#include<vector>
using namespace std;

int main() {
	// 5 <= n <= 1000
	int n;
	cin >> n;

	vector<string> c(n);
	
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		c[n].push_back(str);
	}

	return 0;
}