#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int num;
int n[9];
int result;
vector<int> v;
int visit[9];
int cnt = 0;

void fun() {
	if (v.size() == num) {
		int tmp = 0;
		for (int i = 0; i < num - 1; i++) {
			tmp += abs(v[i + 1] - v[i]);
		}
		result = max(result, tmp);
		return;
	}
	for (int i = 1; i <= num; i++) {
		//백트래킹
		if (!visit[i]) {
			visit[i] = 1;
			v.push_back(n[i]);
			fun();
			v.pop_back();
			visit[i] = 0;
		}
	}
}

int main() {
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> n[i];
	}

	fun();

	cout << result << '\n';
}