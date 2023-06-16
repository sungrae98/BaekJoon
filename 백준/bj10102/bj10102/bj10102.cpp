#include<iostream>
using namespace std;

int main() {
	//심사위원 수 
	int V;
	cin >> V;
	//투표 결과
	string str;
	cin >> str;

	int a = 0, b = 0;

	for (int i = 0; i < V; i++) {
		char c = str.at(i);

		if (c == 'A') {
			a++;
		}
		else if (c == 'B') {
			b++;
		}
	}

	if (a == b) {
		cout << "Tie";
	}
	else if (a > b) {
		cout << "A";
	}
	else {
		cout << "B";
	}

}