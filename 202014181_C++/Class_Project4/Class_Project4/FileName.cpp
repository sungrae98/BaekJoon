#include<iostream>
using namespace std;

class Date { //Date Ŭ���� ����
private: //���� �����ڴ� private : class�ܺο����� ���� �Ұ�
	int year; //�⵵�� ��Ÿ���� ������ ���
	int month; // ���� ��Ÿ���� ������ ���
	int day; // ���� ��Ÿ���� ������ ���

public: // Method�� Access modifier�� public
	void setDate(int yy, int mm, int dd) { //��¥�� �����ϴ� �޼���
		year = yy; //year ������ ����� ���ڷ� ���� yy�� �Ҵ�
		month = mm; //month ������ ����� ���ڷ� ���� mm�� �Ҵ�
		day = dd; //day ������ ����� ���ڷ� ���� dd�� �Ҵ�
	}
	void setDisplay() { //ȭ�鿡 ����ϴ� �޼���
		cout << year << "." << month << "." << day << ".";
	}
};

int main() {
	Date birthday; //Date Ŭ������ birthday ��ü ����

	birthday.setDate(1998, 01, 15); //birthday ��¥ ����

	birthday.setDisplay(); //birthday ��¥ ���
}