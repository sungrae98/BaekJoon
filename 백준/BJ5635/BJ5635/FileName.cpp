#include <iostream>
using namespace std;
int main() {
	int N; //�л� ��
	cin >> N;

	//��������� ������ �迭 �����Ҵ�
	string** str = new string*[N];

	//�л� ���� �޾ƿ���
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> str[i][j];
		}
	}

}