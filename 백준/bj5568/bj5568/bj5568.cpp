#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;

int n, k;
set<int> numbers;
vector<int> v;
bool checked[10];

void func(int cnt, string s) {

	if (cnt == k) {
		numbers.insert(stoi(s));

		return;
	}

	for (int i = 0; i < n; i++) {
		if (checked[i] == true) {
			continue;
		}
		checked[i] = true;
		string after = s;
		after += to_string(v[i]);
		func(cnt + 1, after);
		checked[i] = false;
	}
}

int main() {
	//n장의 숫자카드
	cin >> n;

	//k개를 선택
	cin >> k;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	func(0, "");

	cout << numbers.size() << '\n';

	return 0;
}