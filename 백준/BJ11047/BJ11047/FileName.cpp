#include<iostream>
using namespace std;

int main() {
	int N; //������ ����
	int won; //��

	cin >> N >> won;
	
	int count; 
	//���� ���� ��
	int sum=0;

	//�迭 ���� �Ҵ�
	int *price = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	// ������ ���ں��� �����鼭 ���� ������ sum�� ����
	for (int i = N-1; i >=0 ; i--) {
			int count = won / price[i];
			sum += count;
			won %= price[i];		
	}

	cout << sum;
}