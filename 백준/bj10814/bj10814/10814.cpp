#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool compare(pair<int, string>a, pair<int, string>b) {
	//첫번째 원소를 기준으로 오름차순
	return a.first < b.first;
}

int main() {
	int n;
	cin >> n;

	pair<int, string>member_compare;
	vector<pair<int, string>> member;
	
	for (int i = 0; i < n; i++) {
		cin >> member_compare.first >> member_compare.second;
		member.push_back(member_compare);
	}
	
	//stable_sort 기존 순서 보장
	stable_sort(member.begin(), member.end(), compare);

	for (int i = 0; i < member.size(); i++) {
		cout << member.at(i).first << ' ' << member.at(i).second << "\n";
	}

	return 0;
}