#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	//세 수 입력
	int arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}