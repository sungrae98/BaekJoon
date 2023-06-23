#include<iostream>
#include<cmath>
using namespace std;

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
		cout << "width= " << width << ", length=" << length << "\n";
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
		cout << "side= " << side << "\n";
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
	Rectangle rectangle(10, 20);
	cout << "Rectangle: " << '\n';
	cout << "area= " << rectangle.calcArea() << '\n';

	//Cube object
	Cube cube(10);
	cout << "Cube: " << "\n";
	cout << "area= " << cube.calcArea();
	cout << ", volume= " << cube.calcVol() << "\n";

}