#include<iostream>
using namespace std;

int main() {
	//점의 개수 n
	int n;
	cin >> n;

	//사분면 q1,q2,q3,q4
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		if (x > 0 && y > 0) {
			q1++;
		}
		else if (x < 0 && y>0) {
			q2++;
		}
		else if (x < 0 && y < 0) {
			q3++;
		}
		else if (x > 0 && y < 0) {
			q4++;
		}
		else {
			q5++;
		}
	}

	cout << "Q1: " << q1 << '\n';
	cout << "Q2: " << q2 << '\n';
	cout << "Q3: " << q3 << '\n';
	cout << "Q4: " << q4 << '\n';
	cout << "AXIS: " << q5 << '\n';
}