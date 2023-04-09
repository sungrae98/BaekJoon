#include<iostream>
using namespace std;

class BMI { //BMI Ŭ���� ����
private: // ���� �����ڴ� private : class �ܺο����� ���� �Ұ�
	double height; //Ű�� ��Ÿ���� ������ ���
	double weight; //�����Ը� ��Ÿ���� ������ ���
	double bmi; //BMI������ ��Ÿ���� ������ ���

public: //Method�� Access modifier�� public
	void getBMI(double h, double w) { //BMI�� ����ϴ� �޼���
		height = h / 100; //Ű�� m(����) ������ ����, height ������ ����� ���ڷ� ���� h�� �Ҵ�
		weight = w; //weight ������ ����� ���ڷ� ���� w�� �Ҵ�
		bmi = weight / (height * height); //BMI = ������ / (Ű * Ű) �Դϴ�.
		
		cout << bmi << endl; //bmi������ ���
	}
	 
	void getResult() { //ȭ�鿡 �񸸵� ����� ����ϴ� �޼���
		if (bmi <= 18.5) {
			//��ü��
			cout << "��ü���Դϴ�.";
		}
		else if ((bmi > 18.5) && (bmi <= 22.9)) {
			//����
			cout << "�����Դϴ�.";
		}
		else if ((bmi > 22.9) && (bmi <= 24.9)) {
			//��ü��
			cout << "��ü���Դϴ�.";
		}
		else {
			//��
			cout << "���Դϴ�.";
		}
	}
};

int main() {
	BMI myBody; //BMI Ŭ������ myBody ��ü ����

	myBody.getBMI(162, 60); // myBody BMI ���� ���

	myBody.getResult(); // myBody ��� ���
}