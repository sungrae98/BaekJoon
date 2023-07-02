#include<iostream>

using namespace std;

int main() {

	int sum = 0;

	//5명의 학생 점수 입력 받기
	for (int i = 0; i < 5; i++) {
		int score;
		cin >> score;

		//만약 40점 미만일 경우
		if (score < 40) {
			score = 40;
		}
		sum += score;
	}

	cout << sum / 5 << "\n";
}