#include<iostream>
#include<vector>

using namespace std;

int main() {

	//�ε�ȣ ������ ���� k
	int k;
	cin >> k;

	//�ε�ȣ�� �����ϴ� ����
	vector<string> c(k);

	//����
	vector<int> number;

	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}

	number[0] = rand() % 10 + 1;

	for (int i = 0; i < k; i++) {
		if (c[i] == "<") {
			
			while (number[0] < rand() % 10 + 1) {
				
			}
		}
		else {

		}

	}
}