#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
	
	//char Ÿ���� list ��ü ����
	list<char> sentence;

	//�Ųٷ� ����� ����
	string str = "A wise man will make more opportunities than he finds";

	//list�� ���� �ֱ�
	for (char c : str) {
		sentence.push_back(c);
	}

	//������ �ݺ���(reverse_iterator)
	list<char>::reverse_iterator riter(sentence.rbegin());

	//����ϱ�
	for (; riter != sentence.rend(); ++riter) {
		cout << *riter;
	}
	cout << endl;
}