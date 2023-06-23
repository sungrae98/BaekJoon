#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//참여하는 사람 수 N
	int N;
	cin >> N;

	//주사위를 던진 3개의 눈을 저장하는 벡터
	vector<int> array(3);

	int max_reward = 0;

	for (int i = 0; i < N; i++) {//참여학생 수 반복문
		//상금을 저장하는 변수
		int reward = 0;

		for (int j = 0; j < 3; j++) {//주사위 3번 반복문
			cin >> array[j];
		}

		if (array[0] == array[1]) {
			if (array[0] == array[2]) { // 3개 다 같은 경우
				reward = 10000 + (array[0] * 1000);
			}
			else if(array[1] !=array[2]) { // 1번과 2번이 같은 경우
				reward = 1000 + array[0] * 100;
			}
		}

		else if (array[1] == array[2]) { // 2번과 3번이 같은 경우
			reward = 1000 + array[1] * 100;
		}

		else if (array[0] == array[2]) { // 1번과 3번이 같은 경우
			reward = 1000 + array[0] * 100;
		}

		else { // 다 다른 경우
			int max = *std:: max_element(array.begin(), array.end());

			reward = max * 100;
		}

		if (reward > max_reward) {
			max_reward = reward;
		}

	}

	cout << max_reward << "\n";

	return 0;
}