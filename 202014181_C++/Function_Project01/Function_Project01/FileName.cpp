#include<iostream>
using namespace std;

void printBigger(int& x, int& y) {
	if (x > y) {
		cout << "큰 수는 " << x << "입니다." << endl;
	}
	else {
		cout << "큰 수는 " << y << "입니다." << endl;
	}
}

int main() {
	int a, b; //입력 받을 2개의 정수

	cout << "첫 번째 숫자를 입력하세요: " << endl;
	cin >> a;

	cout << "두 번째 숫자를 입력하세요: " << endl;
	cin >> b;

	printBigger(a, b);

	return 0;
}