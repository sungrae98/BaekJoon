#include<iostream>

using namespace std;

int main() {
	//돌의 개수 n
	int n;
	cin >> n;

	if (n % 2 == 0) {
		//짝수일 때 상근 승
		cout << "SK";
	}
	else {
		//홀수일 때 창영 승
		cout << "CY";
	}
	return 0;
}