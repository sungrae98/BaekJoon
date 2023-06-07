#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
	
	//char 타입의 list 객체 생성
	list<char> sentence;

	//거꾸로 출력할 문장
	string str = "A wise man will make more opportunities than he finds";

	//list에 문장 넣기
	for (char c : str) {
		sentence.push_back(c);
	}

	//역방향 반복자(reverse_iterator)
	list<char>::reverse_iterator riter(sentence.rbegin());

	//출력하기
	for (; riter != sentence.rend(); ++riter) {
		cout << *riter;
	}
	cout << endl;
}