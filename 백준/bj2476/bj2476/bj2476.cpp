#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//�����ϴ� ��� �� N
	int N;
	cin >> N;

	//�ֻ����� ���� 3���� ���� �����ϴ� ����
	vector<int> array(3);

	int max_reward = 0;

	for (int i = 0; i < N; i++) {//�����л� �� �ݺ���
		//����� �����ϴ� ����
		int reward = 0;

		for (int j = 0; j < 3; j++) {//�ֻ��� 3�� �ݺ���
			cin >> array[j];
		}

		if (array[0] == array[1]) {
			if (array[0] == array[2]) { // 3�� �� ���� ���
				reward = 10000 + (array[0] * 1000);
			}
			else if(array[1] !=array[2]) { // 1���� 2���� ���� ���
				reward = 1000 + array[0] * 100;
			}
		}

		else if (array[1] == array[2]) { // 2���� 3���� ���� ���
			reward = 1000 + array[1] * 100;
		}

		else if (array[0] == array[2]) { // 1���� 3���� ���� ���
			reward = 1000 + array[0] * 100;
		}

		else { // �� �ٸ� ���
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