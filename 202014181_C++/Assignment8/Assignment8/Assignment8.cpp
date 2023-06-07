#include<iostream>
using namespace std;

class Animal { // Abstract Base Class
protected:
	string name;
public:
	Animal(string n) : name(n) { // Constructor
	}
	virtual void sound() = 0; // Pure Virtual Method
};

class Dog : public Animal {
public:
	Dog(string n) : Animal(n){} // Constructor
	void sound() { // Override
		cout << name << "�� �۸�" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string n) : Animal(n){} // Constructor
	void sound() { // Override
		cout << name << "�� �߿˾߿�" << endl;
	}
};

int main() {
	Animal* dog = new Dog("�����"); // Animal�� �����͸� Ȱ���Ͽ� Dog ��ü�� ����Ŵ
	Animal* cat = new Cat("����"); // Animal�� �����͸� Ȱ���Ͽ� Cat ��ü�� ����Ŵ

	dog->sound();
	cat->sound();

	delete dog;
	delete cat;

	return 0;
}




