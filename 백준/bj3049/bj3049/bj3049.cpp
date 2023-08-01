#include<iostream>
using namespace std;

int main() {
	//대각선 교차점 하나가 생기려면 대각선 두 개가 필요하고
	//대각선은 꼭지점 2개로 이뤄지기 때문에 
	//총 4개의 쪽지점의 조합이 필요하다.
	int n;
	cin >> n;

	int result = n * (n - 1) * (n - 2) * (n - 3) / 24;

	cout << result << '\n';
	return 0;
}