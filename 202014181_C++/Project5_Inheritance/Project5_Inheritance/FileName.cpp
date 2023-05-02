#include<iostream>
using namespace std;
#define PI 3.14 // ��� PI�� ����

class Circle { // Circle Ŭ���� ����
public:
	int x;
	int y;
	int radius; // �߽� ��ǥ�� ������

	double get_area() { // ���� ������ ��ȯ�ϴ� �޼���
		return (PI * radius * radius);
	}
};

class Sphere : public Circle { // Circle Ŭ������ ����ϴ� Sphere Ŭ����, ���� �����ڴ� public
public:
	int z; // Sphere�� z�� ��ǥ

	double get_area() { // ���� ǥ������ ��ȯ�ϴ� �޼���
		return (4 * PI * radius * radius);
	}

	double get_volumn() { // ���� ���Ǹ� ��ȯ�ϴ� �޼���
		return ((4.0 / 3.0) * PI * radius * radius * radius);
	}
};

int main() {
	Circle c; // Circle ��ü ����
	c.x = 1;
	c.y = 1;
	c.radius = 5;

	Sphere s; // Sphere ��ü ����
	s.x = 2;
	s.y = 2;
	s.radius = 2;

	//��ü�� ��� �Լ� ȣ��
	cout << "���� ���� : " << c.get_area() << endl;
	cout << "���� ǥ���� : " << c.get_area() << endl;
	cout << "���� ���� : " << s.get_volumn() << endl;
}