#include<iostream>
using namespace std;

int calculator(int& x, int& y) {

	int r2 = (2 * y) - x;

	return r2;
}

int main() {
	int r1, avg; //정수와 평균 변수

	cin >> r1 >> avg;

	cout << calculator(r1, avg);
	
	return 0;
}