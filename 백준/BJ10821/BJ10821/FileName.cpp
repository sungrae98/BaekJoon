#include<iostream>
#include<string>
using namespace std;

int main() {
	//���ڿ� �Է� �ޱ�
	string str;
	cin >> str;

	//,(�޸�) ������ ������ ����
	int count = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ',') {
			count++;
		}
	}
	cout << count + 1 << endl;
}