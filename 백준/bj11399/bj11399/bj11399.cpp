#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//사람의 수 N
	int N;
	cin >> N;

	vector <int> v;

	for (int i = 0; i < N; i++) {
		//돈을 인출하는데 걸리는 시간 p
		int p;
		cin >> p;

		v.push_back(p);
	}

	sort(v.begin(), v.end());

	//합을 저장하는 변수
	int sum = 0;

	for (int j = 0; j < N; j++) {
		//시간의 합의 최솟값을 보면 가장 작은 값은 N - (인덱스 번호)j 만큼 더해진다.
		sum += v[j] * (N - j);
	}

	cout << sum << "\n";
}