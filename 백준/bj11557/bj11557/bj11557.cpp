#include<iostream>
#include<vector>
using namespace std;

int main() {
	//�׽�Ʈ ���̽� ���� t
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		//�б��� ���� ���� n
		int n;
		cin >> n;

		//�ִ밪�� ������ ������ 
		//�� ���� index���� ������ ����
		int max = 0;
		int index = 0;

		vector<string> uni(n);
		vector<int> alcoho(n);

		for (int j = 0; j < n; j++) {

			cin >> uni[j];
			cin >> alcoho[j];

			if (max < alcoho[j]) {
				max = alcoho[j];
				index = j;
			}
		}
		cout << uni[index] << '\n';
	}
}