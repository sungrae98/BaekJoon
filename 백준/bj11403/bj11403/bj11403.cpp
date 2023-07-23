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
	//������ ���� n
	int n, num;
	cin >> n;

	//n*n���
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//�ԷµǴ� ���� 0�̸� �ѱ��
			//1�� ��츸 ���Ϳ� ����
			cin >> num;
			if (num) {
				v[i].push_back(j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		//�ʱ�ȭ���ִ� �Լ�
		memset(visit, 0, sizeof(visit));
		dfs(i);
		for (int j = 0; j < n; j++) {
			cout << visit[j] << " ";
		}
		cout << '\n';
	}
	return 0;
}