#include<iostream>
using namespace std;

int main() {
	//������ �����ϴ� �迭
	int array[5];

	for (int i = 0; i < 5; i++) {
		//���� �����ϱ� ���� ����
		int sum = 0;

		for (int j = 0; j < 4; j++) {
			
			int score;

			cin >> score;
			sum += score;
		}
		array[i] = sum;
	}
	
	//����� ��ȣ
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