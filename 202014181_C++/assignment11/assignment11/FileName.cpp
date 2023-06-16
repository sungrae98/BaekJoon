#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Shape {
public:
	virtual double getArea() const = 0;
};

class TwoDShape :public Shape {
public:
	double getArea() const override {
		return calculateArea();
	}
protected:
	virtual double calculateArea() const = 0;
};

class Triangle : public TwoDShape {
private:
	double side1;
	double side2;
	double side3;

public:
	void setDimensions() {
		cout << "Enter the length of the side 1: ";
		cin >> side1;
		cout << "Enter the length of the side 2: ";
		cin >> side2;
		cout << "Enter the length of the side 3: ";
		cin >> side3;
        cout << '\n';
	}

	double calculateArea() const override {
		double s = (side1 + side2 + side3) / 2;
		return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	}
};

class Rectangle : public TwoDShape {
private:
	double length;
	double height;

public:
	void setDimensions() {
		cout << "Enter the length: ";
		cin >> length;
        cout << "Enter the width:";
		cin >> height;
        cout << '\n';
	}

	double calculateArea() const override {
		return length * height;
	}
};

class Circle : public TwoDShape {
private:
	double radius;

public:
	void setDimensions() {
		cout << "Enter the radius: ";
		cin >> radius;
        cout << '\n';
	}

	double calculateArea() const override {
		return 3.14 * pow(radius, 2);
	}
};

int main() {
    int choice;
    double area;

    do {
        // 메뉴 출력 및 사용자 입력 받기
        cout << "Select the shape you would like to enter:" << endl;
        cout << "1 - Triangle" << endl;
        cout << "2 - Rectangle" << endl;
        cout << "3 - Circle" << endl;
        cout << "4 - Exit the application" << endl;
        cout << '\n';
        cout << "Enter selection: ";
        cin >> choice;
        cout << '\n';

        switch (choice) {
        case 1: {
            Triangle triangle;
            triangle.setDimensions(); 
            area = triangle.getArea(); 
            cout << fixed;
            cout.precision(2);
            cout << "The area of the triangle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 2: {
            Rectangle rectangle;
            rectangle.setDimensions(); 
            area = rectangle.getArea(); 
            cout << fixed;
            cout.precision(2);
            cout << "The area of the rectangle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 3: {
            Circle circle;
            circle.setDimensions();
            area = circle.getArea();
            cout << fixed;
            cout.precision(2);
            cout << "The area of the circle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 4: {
            cout << "Exit" << endl;
            break;
        }
              cout << endl;
        }
    } while (choice != 4);

    return 0;
}