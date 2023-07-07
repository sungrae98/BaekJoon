#include<iostream>
#include<algorithm>
using namespace std;

int grid[100][100];

int main() {
	int t, m, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int sum = 0;
		cin >> m >> n;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> grid[i][j];
			}
		}

		//grid에서 아래서 부터 0있는지 확인
		for (int i = 0; i < n; i++) {
			int box = 0;
			for (int j = m - 1; j >= 0; j--) {
				if (grid[j][i] == 0) {
					box++;
				}
				else {
					sum += box;
				}
			}
		}
		cout << sum << "\n";
	}
	return 0;
}