#include<iostream>
using namespace std;

int main() {
	//�밢�� ������ �ϳ��� ������� �밢�� �� ���� �ʿ��ϰ�
	//�밢���� ������ 2���� �̷����� ������ 
	//�� 4���� �������� ������ �ʿ��ϴ�.
	int n;
	cin >> n;

	int result = n * (n - 1) * (n - 2) * (n - 3) / 24;

	cout << result << '\n';
	return 0;
}