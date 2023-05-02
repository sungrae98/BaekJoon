#include<iostream>
using namespace std;
#define PI 3.14 // 상수 PI를 정의

class Circle { // Circle 클래스 정의
public:
	int x;
	int y;
	int radius; // 중심 좌표와 반지름

	double get_area() { // 원의 면적을 반환하는 메서드
		return (PI * radius * radius);
	}
};

class Sphere : public Circle { // Circle 클래스를 상속하는 Sphere 클래스, 접근 지정자는 public
public:
	int z; // Sphere의 z축 좌표

	double get_area() { // 구의 표면적을 반환하는 메서드
		return (4 * PI * radius * radius);
	}

	double get_volumn() { // 구의 부피를 반환하는 메서드
		return ((4.0 / 3.0) * PI * radius * radius * radius);
	}
};

int main() {
	Circle c; // Circle 객체 생성
	c.x = 1;
	c.y = 1;
	c.radius = 5;

	Sphere s; // Sphere 객체 생성
	s.x = 2;
	s.y = 2;
	s.radius = 2;

	//객체의 멤버 함수 호출
	cout << "원의 면적 : " << c.get_area() << endl;
	cout << "구의 표면적 : " << c.get_area() << endl;
	cout << "구의 부피 : " << s.get_volumn() << endl;
}