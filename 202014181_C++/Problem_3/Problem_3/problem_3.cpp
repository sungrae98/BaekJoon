#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Complex {
public:
	Complex(double r, double i);
};

Complex operator+(const Complex& c1, const Complex& c2) {
	return c1 + c2;
}

class Shape {

public:
	virtual double calcArea() = 0;

};

class TwoDShape :public Shape {

};

class ThreeDShape {
public:
	virtual double calcArea() = 0;
	virtual double calcVol() = 0;
};

class Triangle :public TwoDShape {
private:
	double side1, side2, side3;
public:
	Triangle(double s1, double s2, double s3) {
		side1 = s1;
		side2 = s2;
		side3 = s3;
	}
	double calcArea() {
		double s = (side1 + side2 + side3) / 2;

		return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	}
};

class Rectangle :public TwoDShape {
private:
	double width, length;
public:
	Rectangle(double w, double l) {
		width = w;
		length = l;
		cout << "    width= " << width << ", length=" << length << "\n";
	}
	double calcArea() {
		return width * length;
	}
};

class Tetrahedron :public ThreeDShape {
private:
	double side;
public:
	Tetrahedron(double s) {
		side = s;
		cout << "    side= " << side << "\n";
	}
	double calcArea() {
		return sqrt(3) * side * side;
	}
	double calcVol() {
		return sqrt(2) * side * side * side / 12;
	}
};

class Cube :public ThreeDShape {
private:
	double side;
public:
	Cube(double s) {
		side = s;
		cout << "    side= " << side << "\n";
	}
	double calcArea() {
		
		return 6 * side * side;
	}
	double calcVol() {
		return side * side * side;
	}
};

int main() {

	//Rectangle obiect
	cout << "Rectangle: " << '\n';
	Rectangle rectangle1(10, 20);
	cout << "    area= " << rectangle1.calcArea() << '\n';

	cout << "Rectangle: " << '\n';
	Rectangle rectangle2(5, 10);
	cout << "    area= " << rectangle2.calcArea() << '\n';

	cout << "2DShape: " << "\n";

	cout << "    area= " << rectangle1.calcArea() + rectangle2.calcArea() << " volume=0" << "\n";

	cout << "\n" << "\n";

	//Cube object
	cout << "Cube: " << "\n";
	Cube cube1(10);

	cout << "    area= " << cube1.calcArea();
	cout << ", volume= " << cube1.calcVol() << "\n";

	cout << "Cube: " << "\n";
	Cube cube2(5);
	cout << "    area= " << cube2.calcArea();
	cout << ", volume= " << cube2.calcVol() << "\n";

	cout << "3DShape: " << "\n";
	cout << "    area= " << cube1.calcArea() + cube2.calcArea();
	cout << ", volmue= " << cube1.calcVol() + cube2.calcVol() << "\n";
}