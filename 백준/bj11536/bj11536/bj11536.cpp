#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void) {
	//ù �ٿ� n��
	int n;
	cin >> n;
	string str[21];
	
	//n�� ��ŭ �о����
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	bool sorted = false;

	for (int i = 0; i < n - 1; i++) {
		if (str[i + 1] > str[i]) {
			sorted = true;
			break;
		}
	}
	if (sorted == false) {
		cout << "DECREASING";
		return 0;
	}

	sorted = false;
	for (int i = 0; i < n - 1; i++) {
		if (str[i + 1] < str[i]) {
			sorted = true;
			break;
		}
	}
	if (sorted == false) {
		cout << "INCREASING";
		return 0;
	}

	cout << "NEITHER";
	return 0;
}