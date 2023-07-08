#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool compare(pair<int, string>a, pair<int, string>b) {
	//ù��° ���Ҹ� �������� ��������
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
	
	//stable_sort ���� ���� ����
	stable_sort(member.begin(), member.end(), compare);

	for (int i = 0; i < member.size(); i++) {
		cout << member.at(i).first << ' ' << member.at(i).second << "\n";
	}

	return 0;
}