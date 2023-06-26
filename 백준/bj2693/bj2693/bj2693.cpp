#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	//테스트 케이스의 개수
	int T;
	cin >> T;

	//T개의 배열
	for (int i = 0; i < T; i++) {
		int arr[10];

		//10개의 배열 원소
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}

		//오름차순 정렬
		sort(arr, arr + 10);

		cout << arr[7] << "\n";
	}
}