#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//N�� ��¥ ����� ����
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[0] * v[n-1] << "\n";

}