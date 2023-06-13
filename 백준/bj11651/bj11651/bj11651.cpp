#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//점의 개수 N
	int N;
	cin >> N;

	//(x,y)를 저장하는 벡터
	vector<pair<int, int>> v;

	//좌표 입력 받기
	int x, y;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(pair<int, int>(y, x));
	}

	//정렬-오름차순
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}