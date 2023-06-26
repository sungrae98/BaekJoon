#include<iostream>
#include<vector>
using namespace std;

int main() {

	//n번째 피보나치 수
	int n;
	cin >> n;

	//피보나치는 long으로
	vector<long long> v;

	v.push_back(0);
	v.push_back(1);

	for (int i = 2; i <= 90; i++) {
		long f = v.at(i - 1) + v.at(i - 2);

		v.push_back(f);
	}

	cout << v.at(n) << "\n";
}