#include <iostream>
#define PI 3.14
using namespace std;

class Shape { // Shape Ŭ���� ����
public:
	virtual double GetArea() = 0; // ���� �Լ� GetArea ����
};

class Oval : public Shape { // Oval Ŭ���� ���� : Shape Ŭ���� ��� ����
private:
	double a, b;

public:
	Oval(double w, double h) { // Oval Ŭ������ ������ 
		a = w;
		b = h;
	}

	double GetArea() { // Shape Ŭ������ Virtual Method�� overriding�� ��
		return a * b * PI;
	}
};

class Rect : public Shape { // Rect Ŭ���� ���� : Shape Ŭ���� ��� ����
private:
	double width, height;

public:
	Rect(double w, double h) {
		width = w;
		height = h;
	}

	double GetArea() {
		return width * height;
	}
};

class Tri : public Shape { // Tri Ŭ���� ���� : Shape Ŭ���� ��� ����
private:
	double base, height;

public:
	Tri(double b, double h) {
		base = b;
		height = h;
	}

	double GetArea() {
		return base * height / 2;
	}
};

int main() {
	Oval oval(10, 20);
	Rect rect(30, 40);
	Tri tri(20, 30);

	cout << "�������̴� " << oval.GetArea() << endl;
	cout << "�θ��ǳ��̴� " << rect.GetArea() << endl;
	cout << "�ﰢ�����̴� " << tri.GetArea() << endl;

	return 0;
}