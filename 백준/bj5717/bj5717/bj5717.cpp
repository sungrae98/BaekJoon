#include<iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main() {
	while (true)
	{
		//남자 b, 여자 g
		int b, g;
		cin >> b >> g;

		if (b == 0) {
			break;
		}
		cout << sum(b, g) << '\n';
	}
}