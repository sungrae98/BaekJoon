#include<iostream>
using namespace std;

int main() {
	//�׽�Ʈ ����
	int test_num;
	// �Է� �޴� ��
	int number;

	cin >> test_num;

	for (int i = 0; i < test_num; i++) {

		// ¦���� ���� ������ ����, even_num ���� ���� ¦���� ������ ����
		int sum = 0, even_num = 0;
		//�ּ� ¦���� ������ ����
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