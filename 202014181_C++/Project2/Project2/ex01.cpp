#include <iostream>
using namespace std;

int main() {

	int num = 1;
	int total = 0;

	//cout << "숫자를 입력하세요." << endl;
	//cin >> num;

	while (num <= 100)
	{
		cout << total << " + " << num << " = ";
		total += num;
		cout << total << endl;
		num++;
	}

	cout << "출력이 완료되었습니다." << endl;
}