#include<iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main() {
	while (true)
	{
		//���� b, ���� g
		int b, g;
		cin >> b >> g;

		if (b == 0) {
			break;
		}
		cout << sum(b, g) << '\n';
	}
}