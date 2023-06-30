#include<iostream>
#include<string>

using namespace std;

int main() {
	//입력 받는 세 개의 자연수
	long a, b, c;
	cin >> a >> b >> c;

	long mul = a * b * c;

	//0 ~ 9까지 카운트할 배열(전부 0으로 초기화)
	int arr[10] = { 0 };

	while (true)
	{
		arr[mul % 10]++;

		mul = mul / 10;

		//몫이 0이면 반복문 탈출
		if (mul == 0) {
			break;
		}
	}

	//배열 전체 출력
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}