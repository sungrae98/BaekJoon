#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	//��ȭ�ð�
	int time;
	//����, �ν�
	int y = 0, m = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> time;

		y += (time / 30 + 1) * 10;
		m += (time / 60 + 1) * 15;
	}

	if (y > m) {
		cout << "M " << m << "\n";
	}
	else if (y == m) {
		cout << "Y " << "M " << m << "\n";
	}
	else {
		cout << "Y " << y << "\n";
	}

	return 0;
}