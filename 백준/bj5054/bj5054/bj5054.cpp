#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	//테스트 케이스 개수 t
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		//거리의 합
		int sum = 0;

		//방문할 상점의 수 n
		int n;
		cin >> n;

		vector<int> v(n);

		//상점 좌표 입력
		for (int j = 0; j < n; j++) {
			cin >> v[j];
		}

		//오름차순 정렬
		sort(v.begin(), v.end());

		for (int j = 1; j < n; j++) {
			//시작부터 가까운 순서대로 차이만큼 더해줌
			sum = sum + (v[j] - v[j - 1]);
		}

		cout << sum * 2 << "\n";
	}

	return 0;
}