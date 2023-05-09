#include<iostream>
using namespace std;

class Calculator {
private:
	void input() {
		cout << "���� 2���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; //Pure virtual Method
public:
	void run() {
		input(); //�� ������ �Է¹���
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) { //Override
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int calc(int a, int b) { // Override
		return a - b;
	}
};

class Multiplication : public Calculator {
protected:
	int calc(int a, int b) {
		return a * b;
	}
};

class Division : public Calculator {
protected:
	int calc(int a, int b) {
		return a / b;
	}
};

int main() {
	Adder adder; // Adder Object ����
	Subtractor substractor; // Subtractor Object ����
	Multiplication multiplication;
	Division division;

	adder.run(); // Adder�� run() ȣ��
	substractor.run();
	multiplication.run();
	division.run();
}