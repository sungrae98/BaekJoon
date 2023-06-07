#include<iostream>
using namespace std;

int main() {
	//내린 사람, 탄 사람을 배열로 선언
	int out[10], in[10];
	//max는 최대 값, sum은 기차에 타고 있는 사람 수 
	int max = 0, sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> out[i] >> in[i];
		sum = -out[i] + in[i] + sum;

		if (max < sum) {
			max = sum;
		}
	}

	cout << max << endl;
}