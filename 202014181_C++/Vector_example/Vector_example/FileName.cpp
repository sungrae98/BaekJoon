#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {

	// char 타입의 list 객체 생성
	list<char> sentence;

	string str = "A wise man will make more opportunities than he finds";

	//문장을 list에 넣게
	for (char c : str) {
		sentence.push_back(c);
	}

	//역방향 반복자(reverse_iterator)
	list<char>::reverse_iterator riter(sentence.rbegin());
 
	for (; riter != sentence.rend(); ++riter) {
		cout << *riter;
	}
	cout << endl;

	return 0;
}