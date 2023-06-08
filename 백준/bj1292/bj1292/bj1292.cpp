#include<iostream>
using namespace std;

int main() {

	// 수열
	int array[1000];
	// 구간의 시작, 끝
	int a, b;
	int sum = 0;

	int count = 0;
	for (int i = 1; count < 1000; i++)
	{
		for (int j = 0; j < i; j++) {
			array[count++] = i;

			if (count == 1000) {
				break;
			}
		}
	}

	cin >> a >> b;
	for (int i = a-1; i <= b-1; i++) {
		sum += array[i];
	}
	cout << sum << endl;
	return 0;
}