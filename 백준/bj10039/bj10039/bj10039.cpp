#include<iostream>

using namespace std;

int main() {

	int sum = 0;

	//5���� �л� ���� �Է� �ޱ�
	for (int i = 0; i < 5; i++) {
		int score;
		cin >> score;

		//���� 40�� �̸��� ���
		if (score < 40) {
			score = 40;
		}
		sum += score;
	}

	cout << sum / 5 << "\n";
}