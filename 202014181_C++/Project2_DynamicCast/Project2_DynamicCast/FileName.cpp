#include <iostream>
using namespace std;

class A{ virtual void f(){} };
class B : public A{};
class C : public A{};

void cast(A* pa) { // pa를 pb로 변환 가능한지 출력하는 함수
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