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
		cout << name << "°¡ ¸Û¸Û" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string n) : Animal(n){} // Constructor
	void sound() { // Override
		cout << name << "°¡ ¾ß¿Ë¾ß¿Ë" << endl;
	}
};

int main() {
	Animal* dog = new Dog("´ó´óÀÌ"); // AnimalÀÇ Æ÷ÀÎÅÍ¸¦ È°¿ëÇÏ¿© Dog °´Ã¼¸¦ °¡¸®Å´
	Animal* cat = new Cat("³ÉÀÌ"); // AnimalÀÇ Æ÷ÀÎÅÍ¸¦ È°¿ëÇÏ¿© Cat °´Ã¼¸¦ °¡¸®Å´

	dog->sound();
	cat->sound();

	delete dog;
	delete cat;

	return 0;
}




