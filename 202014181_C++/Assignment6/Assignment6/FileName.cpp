#include<iostream>
using namespace std;
#define PI 3.14 // 상수 PI를 정의

class Point { // 클래스 Point 정의
public:
	int x;
	int y;

	Point(int x, int y) { // Point 클래스의 생성자 정의
		this->x = x;
		this->y = y;
	}

	void Move(int xx, int yy) { // 좌표를 이동시키는 역할을 하는 Move() 메서드 정의
		x += xx;
		y += yy;

	}

	void Draw() { // 좌표를 출력하는 역할을 하는 Draw() 메서드 정의
		cout << "점의 좌표: (" << x << "," << y << ")"<<endl;
	}

};

class Circle : public Point { // Circle 클래스 정의 - Point 클래스를 상속 받아 구현
public:
	// Point 클래스에 있는 데이터 변수 그대로 사용 가능
	double radius; // 중심 좌표와 반지름

	Circle(int x, int y, double radius) : Point(x,y) { //Circle 클래스의 생성자 정의
		this->radius = radius;
	}

	void Draw() { // 원의 중심 좌표와 반지름을 출력하는 메서드
		cout << "원의 중심 좌표: (" << x << "," << y << ")"<<endl;
		cout << "원의 반지름: " << radius << endl;
	}

	double GetArea() { // 원의 면적을 반환하는 메서드
		return (PI * radius * radius);
	}
};

int main() {

	Point p(1, 1); // Point 객체 생성
	p.Draw(); //메서드 호출
	p.Move(2, 2);
	p.Draw();
	cout << "\n";

	Circle c(1,1,3); // Circle 객체 생성
	c.Draw();
	c.Move(3, 3);
	c.Draw();
	cout << "원의 넓이 : " << c.GetArea() << endl;

	return 0;
}