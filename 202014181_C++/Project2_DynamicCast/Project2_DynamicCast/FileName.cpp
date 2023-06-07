#include <iostream>
using namespace std;

class A{ virtual void f(){} };
class B : public A{};
class C : public A{};

void cast(A* pa) { // pa�� pb�� ��ȯ �������� ����ϴ� �Լ�
	B* pb;
	pb = dynamic_cast<B*>(pa);
	if (pb == nullptr) {
		cout << "fail" << endl;
	}
	else {
		cout << "success" << endl;
	}
}

int main() {
	A a, * pa;
	B b;
	C c;

	pa = &a;
	cast(pa);

	pa = dynamic_cast<A*>(&b);
	cast(pa);

	pa = dynamic_cast<A*>(&c);
	cast(pa);
}