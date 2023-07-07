#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<string> v1(n);
	vector<int> v2(n);

	//가장 쉬운 문제 찾기
	int min = 5;
	//그때의 인덱스 저장
	int index = 0;

	for (int i = 0; i < n; i++) {
		cin >> v1[i];
		cin >> v2[i];

		if (min > v2[i]) {
			min = v2[i];
			index = i;
		}
	}
	cout << v1[index] << "\n";

	return 0;
}