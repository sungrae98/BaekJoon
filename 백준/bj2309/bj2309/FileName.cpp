#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	//��ȩ �������� Ű�� �����ϴ� �迭
	vector<int> array(9);

	//Ű�� ���� �����ϴ� ����
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> array[i];
		sum += array[i];
	}

	sort(array.begin(), array.end());
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sum - array[i] - array[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (i == k || j == k) {
						continue;
					}
					cout << array[k] << '\n';
				}
				//���⼭ ���α׷��� ������ ��� ����� �ȵ�.
				return 0;
			}
		}
	}
	
	
}