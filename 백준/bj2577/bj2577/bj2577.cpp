#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	//�Է� �޴� �� ���� �ڿ���
	long a, b, c;
	cin >> a >> b >> c;

	long mul = a * b * c;

	string str = to_string(mul);
	for (int i = 0; i <= 9; i++) {
		//�� �� �������� ������ ����
		int count = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j]) {
				count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}