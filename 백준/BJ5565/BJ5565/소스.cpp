#include<iostream>
using namespace std;

int main() {
	// 책 10권의 총 가격
	int total_price;

	cin >> total_price;

	//책 9권의 가격을 합쳐서 저장할 변수
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		int price;
		cin >> price;
		sum += price;
	}

	cout << total_price - sum;
}