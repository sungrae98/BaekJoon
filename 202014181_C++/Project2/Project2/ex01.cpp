#include <iostream>
using namespace std;

int main() {

	int num = 1;
	int total = 0;

	//cout << "���ڸ� �Է��ϼ���." << endl;
	//cin >> num;

	while (num <= 100)
	{
		cout << total << " + " << num << " = ";
		total += num;
		cout << total << endl;
		num++;
	}

	cout << "����� �Ϸ�Ǿ����ϴ�." << endl;
}