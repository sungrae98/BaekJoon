#include<iostream>
using namespace std;

int main() {
	//테스트 케이스의 개수 k
	int k;
	cin >> k;
	//참가자 p 자리 수 m
	int p, m;

	for (int i = 0; i < k; i++) {
		cin >> p >> m;
		bool arr[501] = {};

		//참가하지 못하는 사람의 수
		int cnt = 0;
		
		for (int j = 0; j < p; j++) {
			//원하는 자리
			int seat;
			cin >> seat;

			if (arr[seat] != 1) {
				arr[seat] = 1;
			}
			else {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}