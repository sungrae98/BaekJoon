#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//과일의 개수
	int N;
	cin >> N;
	//스네이크버드의 초기 길이
	int L;
	cin >> L;

	vector<int> height(N);

	for (int i = 0; i < N; i++) {
		cin >> height[i];
	}

	//과일을 입력순으로 먹는 것이 아니기 때문에 오름차순 정렬이 필요하다.
	sort(height.begin(), height.end());
	
	for (int i = 0; i < N; i++) {
		if (L >= height[i]) {
			L++;
		}
	}

	cout << L << "\n";
}