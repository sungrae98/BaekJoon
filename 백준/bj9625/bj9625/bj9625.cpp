#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int a[45];
	int b[45];

	a[0] = 0;
	a[1] = 1;
	b[0] = 1;
	b[1] = 1;

	for (int i = 2; i < num; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}

	cout << a[num - 1] << " " << b[num - 1];
	return 0;
}