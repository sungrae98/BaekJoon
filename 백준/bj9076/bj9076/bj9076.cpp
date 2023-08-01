#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	//테스트 케이스의 개수 t
	int t;
	cin >> t;

	int arr[5] = { 0, };

	while (t--)
	{
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
		}

		sort(arr, arr + 5);

		if (arr[3] - arr[1] >= 4) {
			cout << "KIN" << '\n';
		}
		else {
			int sum = arr[1] + arr[2] + arr[3];
			cout << sum << '\n';
		}
	}
	return 0;
}