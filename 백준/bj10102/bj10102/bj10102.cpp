#include<iostream>
using namespace std;

int main() {
	//�ɻ����� �� 
	int V;
	cin >> V;
	//��ǥ ���
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