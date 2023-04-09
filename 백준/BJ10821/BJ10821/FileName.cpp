#include<iostream>
#include<string>
using namespace std;

int main() {
	//문자열 입력 받기
	string str;
	cin >> str;

	//,(콤마) 개수를 저장할 변수
	int count = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ',') {
			count++;
		}
	}
	cout << count + 1 << endl;
}