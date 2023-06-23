#include<iostream>
using namespace std;

int main() {
	//점수를 저장하는 배열
	int array[5];

	for (int i = 0; i < 5; i++) {
		//합을 저장하기 위한 변수
		int sum = 0;

		for (int j = 0; j < 4; j++) {
			
			int score;

			cin >> score;
			sum += score;
		}
		array[i] = sum;
	}
	
	//우승자 번호
	int index;
	int max = 0;

	for (int i = 0; i < 5; i++) {

		if (array[i] > max) {
			index = i;
			max = array[i];
		}
	}

	cout << index + 1 << " " << max << "\n";
}