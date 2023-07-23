#include<iostream>
#include<vector>
using namespace std;

vector<int> v[100];
int visit[100];

void dfs(int x) {
	for (int i = 0; i < v[x].size(); i++) {
		if (!visit[v[x][i]]) {
			visit[v[x][i]] = 1;
			dfs(v[x][i]);
		}
	}
}

int main() {
	//정점의 개수 n
	int n, num;
	cin >> n;

	//n*n행렬
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//입력되는 수가 0이면 넘기고
			//1인 경우만 벡터에 저장
			cin >> num;
			if (num) {
				v[i].push_back(j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		//초기화해주는 함수
		memset(visit, 0, sizeof(visit));
		dfs(i);
		for (int j = 0; j < n; j++) {
			cout << visit[j] << " ";
		}
		cout << '\n';
	}
	return 0;
}