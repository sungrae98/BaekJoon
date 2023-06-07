#include<iostream>
using namespace std;

int main() {
	//테스트 개수
	int test_num;
	// 입력 받는 수
	int number;

	cin >> test_num;

	for (int i = 0; i < test_num; i++) {

		// 짝수의 합을 저장할 변수, even_num 가장 작은 짝수를 저장할 변수
		int sum = 0, even_num = 0;
		//최소 짝수를 저장할 변수
		int min = 101;

		for (int j = 0; j < 7; j++) {
			cin >> number;

			if (number % 2 == 0) {
				sum += number;
				even_num = number;
				if (min > even_num) {
					min = even_num;
				}
			}
		}

		cout << sum << " " << min << endl;
	}
}