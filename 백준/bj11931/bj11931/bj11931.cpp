#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	//오름차순 정렬
	//sort(v.begin(), v.end());
	//내림차순 정렬
	sort(v.rbegin(), v.rend());

	//greater를 사용하여 내림차순, less<int>()는 오름차순
	//sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}