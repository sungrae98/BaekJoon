#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int cute = 0;
	int not_cute = 0;

	for (int i = 0; i < n; i++) {
		int vote;
		cin >> vote;

		if (vote == 1) {
			cute++;
		}
		else {
			not_cute++;
		}
	}

	if (cute > not_cute) {
		cout << "Junhee is cute!" << "\n";
	}
	else {
		cout << "Junhee is not cute!" << "\n";
	}
}