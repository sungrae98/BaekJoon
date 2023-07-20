#include<iostream>
#include<vector>
using namespace std;

int main() {
	//테스트 케이스 숫자 t
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		//학교의 숫자 정수 n
		int n;
		cin >> n;

		//최대값을 저정할 변수와 
		//그 때의 index값을 저장할 변수
		int max = 0;
		int index = 0;

		vector<string> uni(n);
		vector<int> alcoho(n);

		for (int j = 0; j < n; j++) {

			cin >> uni[j];
			cin >> alcoho[j];

			if (max < alcoho[j]) {
				max = alcoho[j];
				index = j;
			}
		}
		cout << uni[index] << '\n';
	}
}