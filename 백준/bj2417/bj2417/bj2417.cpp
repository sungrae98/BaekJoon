#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long num;
	cin >> num;

	long q = sqrt(num);

	if (q * q < num) {
		q += 1;
	}

	cout << q;
}