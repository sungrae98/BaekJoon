#include<iostream>

using namespace std;

int main() {
	//테스트 케이스 개수 t
	int  t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		//가위바위보를 한 횟수 n
		int n;
		cin >> n;

		//이긴 결과를 저장하는 변수
		int result1 = 0;
		int result2 = 0;

		for (int j = 0; j < n; j++) {
			char p1, p2;
			cin >> p1 >> p2;

			if (p1 == 'R' && p2 == 'P') {
				result2++;
			}
			else if (p1 == 'S' && p2 == 'R') {
				result2++;
			}
			else if (p1 == 'P' && p2 == 'S') {
				result2++;
			}
			else if (p1 == p2) {
				continue;
			}
			else {
				result1++;
			}
		}

		//출력하는 부분
		if (result1 < result2) {
			cout << "Player 2" << "\n";
		}
		else if (result1 > result2) {
			cout << "Player 1" << "\n";
		}
		else {
			cout << "TIE" << "\n";
		}
	}
	
}