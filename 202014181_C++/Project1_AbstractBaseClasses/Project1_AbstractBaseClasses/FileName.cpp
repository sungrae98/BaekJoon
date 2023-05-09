#include<iostream>
using namespace std;

class Calculator {
private:
	void input() {
		cout << "정수 2개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; //Pure virtual Method
public:
	void run() {
		input(); //두 정수를 입력받음
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) { //Override
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int calc(int a, int b) { // Override
		return a - b;
	}
};

class Multiplication : public Calculator {
protected:
	int calc(int a, int b) {
		return a * b;
	}
};

class Division : public Calculator {
protected:
	int calc(int a, int b) {
		return a / b;
	}
};

int main() {
	Adder adder; // Adder Object 생성
	Subtractor substractor; // Subtractor Object 생성
	Multiplication multiplication;
	Division division;

	adder.run(); // Adder의 run() 호출
	substractor.run();
	multiplication.run();
	division.run();
}