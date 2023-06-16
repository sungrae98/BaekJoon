#include <iostream>
#include<iomanip>
#include <cmath> // sqrt �Լ��� ����ϱ� ���� �ʿ�

using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual double getArea() const = 0; // ���� ���� �Լ� (Pure Virtual Function)
};

// TwoDShape Ŭ���� (Shape Ŭ������ ��ӹ���)
class TwoDShape : public Shape {
public:
    // Shape Ŭ������ ���� ���� �Լ��� �������̵��Ͽ� ����
    double getArea() const override {
        return calculateArea();
    }

protected:
    virtual double calculateArea() const = 0; // ���� ���� �Լ� (Pure Virtual Function)
};

// Triangle Ŭ���� (TwoDShape Ŭ������ ��ӹ���)
class Triangle : public TwoDShape {
public:
    // �ﰢ���� ���� ���
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;

        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // ����ڷκ��� �ﰢ���� �� ���̸� �Է¹���
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

// Rectangle Ŭ���� (TwoDShape Ŭ������ ��ӹ���)
class Rectangle : public TwoDShape {
public:
    // ���簢���� ���� ���
    double calculateArea() const override {
        return length * width;
    }

    // ����ڷκ��� ���簢���� ���ο� ���� ���̸� �Է¹���
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

// Circle Ŭ���� (TwoDShape Ŭ������ ��ӹ���)
class Circle : public TwoDShape {
public:
    // ���� ���� ���
    double calculateArea() const override {
        return 3.14 * pow(radius, 2);
    }

    // ����ڷκ��� ���� �������� �Է¹���
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
        // �޴� ��� �� ����� �Է� �ޱ�
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
            triangle.setDimensions(); // �ﰢ���� �� ���� �Է� �ޱ�
            area = triangle.getArea(); // �ﰢ���� ���� ���
            cout << fixed;
            cout.precision(2);
            cout << "The area of the triangle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 2: {
            Rectangle rectangle;
            rectangle.setDimensions(); // ���簢���� ���ο� ���� ���� �Է� �ޱ�
            area = rectangle.getArea(); // ���簢���� ���� ���
            cout << fixed;
            cout.precision(2);
            cout << "The area of the rectangle is: " << area << endl << '\n';
            cout << "-------------------------------------" << '\n';
            break;
        }
        case 3: {
            Circle circle;
            circle.setDimensions(); // ���� ������ �Է� �ޱ�
            area = circle.getArea(); // ���� ���� ���
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
