#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Shape {
public:
	virtual double GetArea() = 0;
};

class TwoDShape: public Shape {
	
};

class Triangle :public TwoDShape {
private:
	double side1, side2, side3;

public:
	Triangle() {
		cout << '\n';
		cout << "Enter the length of the side 1: ";
		cin >> side1;
		cout << "Enter the length of the side 2: ";
		cin >> side2;
		cout << "Enter the length of the side 3: ";
		cin >> side3;
	}

	double GetArea() {
		double s = (side1 + side2 + side3) / 2;
		return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	}
};

class Rectangle :public TwoDShape {
private:
	double length;
	double height;
public:
	Rectangle() {
		cout << '\n';
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> height;
		cout << '\n';
	}
	double GetArea() {
		return length * height;
	}
};

class Circle :public TwoDShape {
private:
	double radius;
public:
	Circle() {
		cout << '\n';
		cout << "Enter the radius: ";
		cin >> radius;
		cout << '\n';
	}
	double GetArea() {
		return 3.14 * pow(radius, 2);
	}
};

int main() {
	int choice;
	double area;

	do
	{
		cout << "Select the shape you would like to enter: " << '\n';
		cout << "1 - Triangle" << '\n';
		cout << "2 - Rectangle" << '\n';
		cout << "3 - Circle" << '\n';
		cout << "4 - Exit" << '\n';
		cout << '\n';
		cout << "Enter selection: ";
		cin >> choice;

		switch (choice)
		{
		case 1: {
			Triangle triangle;
			area = triangle.GetArea();
			cout << fixed;
			cout.precision(2);
			cout << "The area of the triangle is: " << area << '\n';
			cout << '\n';
			cout << "-----------------------------------------" << '\n';
			break;
		}
		case 2: {
			Rectangle rectangle;
			area = rectangle.GetArea();
			cout << fixed;
			cout.precision(2);
			cout << "The area of the triangle is: " << area << '\n';
			cout << '\n';
			cout << "-----------------------------------------" << '\n';
			break;
		}
		case 3: {
			Circle circle;
			area = circle.GetArea();
			cout << fixed;
			cout.precision(2);
			cout << "The area of the circle is: " << area << '\n';
			cout << '\n';
			cout << "-----------------------------------------" << '\n';
			break;
		}
		case 4: {
			cout << "Exit" << '\n';
			break;
		}
		
		}


	} while (choice != 4);
}