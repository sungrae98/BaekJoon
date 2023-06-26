#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	//첫 줄 N
	int N;
	cin >> N;

	//입력 숫자
	int num;
	//저장 벡터
	vector<int> v1, v2;

	for (int j = 0; j < N; j++) {
		cin >> num;
		v1.push_back(num);
	}
	for (int j = 0; j < N; j++) {
		cin >> num;
		v2.push_back(num);
	}

	//오름차순으로
	sort(v1.begin(), v1.end());

	//오름차순으로 하고 역순으로
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end());

	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += v1[i] * v2[i];
	}

	cout << sum << "\n";
}