#include<iostream>
#include<vector>

using namespace std;

int main() {

	//부등호 문자의 개수 k
	int k;
	cin >> k;

	//부등호를 저장하는 벡터
	vector<string> c(k);

	//숫자
	vector<int> number;

	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}

	number[0] = rand() % 10 + 1;

	for (int i = 0; i < k; i++) {
		if (c[i] == "<") {
			
			while (number[0] < rand() % 10 + 1) {
				
			}
		}
		else {

		}

	}
}