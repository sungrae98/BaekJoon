#include <iostream>
#define PI 3.14
using namespace std;

class Shape { // Shape 클래스 정의
public:
	virtual double GetArea() = 0; // 가상 함수 GetArea 선언
};

class Oval : public Shape { // Oval 클래스 정의 : Shape 클래스 상속 받음
private:
	double a, b;

public:
	Oval(double w, double h) { // Oval 클래스의 생성자 
		a = w;
		b = h;
	}

	double GetArea() { // Shape 클래스의 Virtual Method를 overriding한 것
		return a * b * PI;
	}
};

class Rect : public Shape { // Rect 클래스 정의 : Shape 클래스 상속 받음
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

class Tri : public Shape { // Tri 클래스 정의 : Shape 클래스 상속 받음
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

	cout << "파전넓이는 " << oval.GetArea() << endl;
	cout << "부리또넓이는 " << rect.GetArea() << endl;
	cout << "삼각김밥넓이는 " << tri.GetArea() << endl;

	return 0;
}