#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	//�׽�Ʈ ���̽��� ����
	int T;
	cin >> T;

	//T���� �迭
	for (int i = 0; i < T; i++) {
		int arr[10];

		//10���� �迭 ����
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}

		//�������� ����
		sort(arr, arr + 10);

		cout << arr[7] << "\n";
	}
}