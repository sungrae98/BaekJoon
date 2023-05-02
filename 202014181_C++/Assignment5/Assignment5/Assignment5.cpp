#include<iostream>
using namespace std;

class BMI { //BMI Ŭ���� ����

private: // ���� �����ڴ� private : class �ܺο����� ���� �Ұ�

	int number; //ȸ�� ��ȣ
	string name; //ȸ�� �̸�
	double height; //Ű�� ��Ÿ���� ������ ���
	double weight; //�����Ը� ��Ÿ���� ������ ���
	double bmi; //BMI������ ��Ÿ���� ������ ���
	int month; //����� ���� ��
	char locker; //�ｺ ��ī �̿� ������ ���

public: //Method�� Access modifier�� public

	void gymPayment(); // �޼��� gymPayment() ����
	void getResult(); // �޼��� getResult() ����
	bool gymLocker(); //�޼��� gymLocker() ����

	// �⺻ Parameterized Constructor
	BMI(int num, string n, double h, double w) {

		number = num; //number ������ ����� ���ڷ� ���� num�� �Ҵ�
		name = n; //name ������ ����� ���ڷ� ���� n�� �Ҵ�, �� �̸�
		height = h / 100; //Ű�� m(����) ������ ����, height ������ ����� ���ڷ� ���� h�� �Ҵ�
		weight = w; //weight ������ ����� ���ڷ� ���� w�� �Ҵ�
		bmi = weight / (height * height); //BMI = ������ / (Ű * Ű) �Դϴ�.

	}
};

void BMI:: gymPayment() {
	int m; //�������� �����ϴ� ����

	cout << "���ϴ� �Ⱓ�� �Է��ϼ���(����) : ";
	cin >> m;
	month = m; // month ������ ����� ���ڷ� ���� m�� �Ҵ�

	if (month == 1) {
		cout << "����� 3���� �Դϴ�." << endl;
	}
	else if (month == 3) {
		cout << "����� 7���� �Դϴ�." << endl;
	}
	else if (month == 6) {
		cout << "����� 13���� �Դϴ�." << endl;
	}
	else if (month == 12) {
		cout << "����� 21���� �Դϴ�." << endl;
	}
}

void BMI:: getResult() { //ȭ�鿡 �񸸵� ����� ����ϴ� �޼���
	if (bmi <= 18.5) {
		//��ü��
		cout << "ȸ�� ��ȣ : " << number << endl << name << "�� ��ü���Դϴ�.";
		cout <<" "<< bmi << endl; //bmi������ ���
	}
	else if ((bmi > 18.5) && (bmi <= 22.9)) {
		//����
		cout << "ȸ�� ��ȣ : " << number << endl << name << "�� �����Դϴ�.";
		cout <<" "<< bmi << endl; //bmi������ ���
	}
	else if ((bmi > 22.9) && (bmi <= 24.9)) {
		//��ü��
		cout << "ȸ�� ��ȣ : " << number << endl << name << "�� ��ü���Դϴ�.";
		cout <<" "<< bmi << endl; //bmi������ ���
	}
	else {
		//��
		cout << "ȸ�� ��ȣ : " << number << endl << name << "�� ���Դϴ�.";
		cout <<" "<< bmi << endl; //bmi������ ���
	}
}

bool BMI:: gymLocker() {
	char l; //�ｺ�� ��뿩�θ� �޴� ���� 

	cout << "�ｺ ��ī�� �̿��Ͻðڽ��ϱ�? (y/n) :";
	cin >> l;
	locker = l; // locker �����ͺ����� ���ڷ� ���� l ���� �Ҵ�

	if (locker == 'y') {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	cout << "1���� : 3����/ 3���� : 7����/ 6���� : 13����/ 12���� : 21����" << endl;
	cout << endl;

	BMI rho(1, "�뼺��", 162, 61); //Parameterizef Constructor ȣ��
	rho.getResult();
	rho.gymPayment();

	bool use_locker = rho.gymLocker();

	if (use_locker) {
		cout << "��ī �̿�� 5õ���� �߰��˴ϴ�." << endl;
	}

	cout << endl;

	BMI park(2, "�ڼ���", 185, 72); //Parameterizef Constructor ȣ��
	park.getResult();
	park.gymPayment();
	use_locker = park.gymLocker();

	if (use_locker) {
		cout << "��ī �̿�� 5õ���� �߰��˴ϴ�." << endl;
	}
}