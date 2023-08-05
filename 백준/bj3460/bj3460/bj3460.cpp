#include<iostream>
using namespace std;

int main() {
	//테스트 케이스 t, 양의 정수 n
	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		//위치를 저장하는 변수
		int index = 0;

		while (n != 0) {
			if (n % 2 == 1) {
				cout << index << ' ';
			}
			n = n / 2;
			index++;
		}
	}

	return 0;
}