#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	//입력 받는 세 개의 자연수
	long a, b, c;
	cin >> a >> b >> c;

	long mul = a * b * c;

	string str = to_string(mul);
	for (int i = 0; i <= 9; i++) {
		//몇 번 쓰였는지 저장할 변수
		int count = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j]) {
				count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}