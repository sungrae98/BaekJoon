#include<iostream>
#include<algorithm>

using namespace std;

int dp[500][500] = { 0 };
int result = 0;

int main() {

	//삼각형의 크기 n
	int n;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> dp[i][j];
		}
	}

	//dp[2][1]은 dp[3][1], dp[3][2] 합 구하기
	//dp[2][2]는 dp[3][2], dp[3][3] 합 구하기

	//dp[3][1]은 dp[4][1], dp[4][2] 합 구하기
	result += dp[1][1];
	result += (max(dp[2][1] + dp[3][1], dp[2][1] + dp[3][2]) < max(dp[2][2] + dp[3][2], dp[2][2] + dp[3][3]));


	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j <= i; j++) {
			

		}
	}

	cout << result << "\n";
}