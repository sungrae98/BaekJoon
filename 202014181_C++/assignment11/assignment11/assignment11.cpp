#include <iostream>
#include<iomanip>
#include <cmath> // sqrt 함수를 사용하기 위해 필요

using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual double getArea() const = 0; // 순수 가상 함수 (Pure Virtual Function)
};

// TwoDShape 클래스 (Shape 클래스를 상속받음)
class TwoDShape : public Shape {
public:
    // Shape 클래스의 순수 가상 함수를 오버라이딩하여 구현
    double getArea() const override {
        return calculateArea();
    }

protected:
    virtual double calculateArea() const = 0; // 순수 가상 함수 (Pure Virtual Function)
};

// Triangle 클래스 (TwoDShape 클래스를 상속받음)
class Triangle : public TwoDShape {
public:
    // 삼각형의 면적 계산
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;

        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // 사용자로부터 삼각형의 변 길이를 입력받음
    void setDimensions() {
        cout << "Enter the length of the side 1: ";
        cin >> side1;
        cout << "Enter the length of the side 2: ";
        cin >> side2;
        cout << "Enter the length of the side 3: ";
        cin >> side3;
        cout << '\n';
    }

private:
    double side1;
    double side2;
    double side3;
};

// Rectangle 클래스 (TwoDShape 클래스를 상속받음)
class Rectangle : public TwoDShape {
public:
    // 직사각형의 면적 계산
    double calculateArea() const override {
        return length * width;
    }

    // 사용자로부터 직사각형의 가로와 세로 길이를 입력받음
    void setDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        cout << '\n';
    }

private:
    double length;
    double width;
};

// Circle 클래스 (TwoDShape 클래스를 상속받음)
class Circle : public TwoDShape {
public:
    // 원의 면적 계산
    double calculateArea() const override {
        return 3.14 * pow(radius, 2);
    }

    // 사용자로부터 원의 반지름을 입력받음
    void setDimensions() {
        cout << "Enter the radius: ";
        cin >> radius;
        cout << '\n';
    }

private:
    double radius;
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
            triangle.setDimensions(); // 삼각형의 변 길이 입력 받기
            area = triangle.getArea(); // 삼각형의 면적 계산
            cout << fixed;
            cout.precision(2);
            cout << "The area of the triangle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 2: {
            Rectangle rectangle;
            rectangle.setDimensions(); // 직사각형의 가로와 세로 길이 입력 받기
            area = rectangle.getArea(); // 직사각형의 면적 계산
            cout << fixed;
            cout.precision(2);
            cout << "The area of the rectangle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 3: {
            Circle circle;
            circle.setDimensions(); // 원의 반지름 입력 받기
            area = circle.getArea(); // 원의 면적 계산
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
