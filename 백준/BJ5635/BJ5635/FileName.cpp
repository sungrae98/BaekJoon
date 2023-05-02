#include <iostream>
using namespace std;
int main() {
	int N; //학생 수
	cin >> N;

	//생년월일을 저장할 배열 동적할당
	string** str = new string*[N];

	//학생 정보 받아오기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> str[i][j];
		}
	}

}