#include<iostream>
#include<string>
using namespace std;

string sen[] = { "000000","001111","010011","011100","100110","101001","110101","111010" };
int n;
string str;

int cmp(string v, int i) {
	int result = 0;
	for (int j = 0; j < 6; j++) {
		if (sen[i][j] != v[j]) {
			result++;
		}
	}
	return result;
}

int main() {
	
	cin >> n >> str;

	string answer;

	for (int i = 0; i < n; i++) {
		string s = str.substr(i * 6, 6);
		bool ok = 0;
		for (int j = 0; j < 8; j++) {
			if (cmp(s, j) <= 1) {
				ok = 1;
				answer += 'A' + j;
				break;
			}
		}
		if (!ok) {
			cout << i + 1;
			return 0;
		}
	}
	cout << answer << '\n';
}