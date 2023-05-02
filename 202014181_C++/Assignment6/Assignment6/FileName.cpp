#include<iostream>
using namespace std;
#define PI 3.14 // ��� PI�� ����

class Point { // Ŭ���� Point ����
public:
	int x;
	int y;

	Point(int x, int y) { // Point Ŭ������ ������ ����
		this->x = x;
		this->y = y;
	}

	void Move(int xx, int yy) { // ��ǥ�� �̵���Ű�� ������ �ϴ� Move() �޼��� ����
		x += xx;
		y += yy;

	}

	void Draw() { // ��ǥ�� ����ϴ� ������ �ϴ� Draw() �޼��� ����
		cout << "���� ��ǥ: (" << x << "," << y << ")"<<endl;
	}

};

class Circle : public Point { // Circle Ŭ���� ���� - Point Ŭ������ ��� �޾� ����
public:
	// Point Ŭ������ �ִ� ������ ���� �״�� ��� ����
	double radius; // �߽� ��ǥ�� ������

	Circle(int x, int y, double radius) : Point(x,y) { //Circle Ŭ������ ������ ����
		this->radius = radius;
	}

	void Draw() { // ���� �߽� ��ǥ�� �������� ����ϴ� �޼���
		cout << "���� �߽� ��ǥ: (" << x << "," << y << ")"<<endl;
		cout << "���� ������: " << radius << endl;
	}

	double GetArea() { // ���� ������ ��ȯ�ϴ� �޼���
		return (PI * radius * radius);
	}
};

int main() {

	Point p(1, 1); // Point ��ü ����
	p.Draw(); //�޼��� ȣ��
	p.Move(2, 2);
	p.Draw();
	cout << "\n";

	Circle c(1,1,3); // Circle ��ü ����
	c.Draw();
	c.Move(3, 3);
	c.Draw();
	cout << "���� ���� : " << c.GetArea() << endl;

	return 0;
}