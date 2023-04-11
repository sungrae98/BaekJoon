#include<iostream>
using namespace std;

int main() {
	int N; //동전의 개수
	int won; //돈

	cin >> N >> won;
	
	int count; 
	//동전 개수 합
	int sum=0;

	//배열 동적 할당
	int *price = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	// 마지막 숫자부터 나누면서 동전 개수를 sum에 저장
	for (int i = N-1; i >=0 ; i--) {
			int count = won / price[i];
			sum += count;
			won %= price[i];		
	}

	cout << sum;
}