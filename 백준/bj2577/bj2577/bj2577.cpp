#include<iostream>
#include<string>

using namespace std;

int main() {
	//�Է� �޴� �� ���� �ڿ���
	long a, b, c;
	cin >> a >> b >> c;

	long mul = a * b * c;

	//0 ~ 9���� ī��Ʈ�� �迭(���� 0���� �ʱ�ȭ)
	int arr[10] = { 0 };

	while (true)
	{
		arr[mul % 10]++;

		mul = mul / 10;

		//���� 0�̸� �ݺ��� Ż��
		if (mul == 0) {
			break;
		}
	}

	//�迭 ��ü ���
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}