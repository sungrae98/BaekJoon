#include<iostream>

using namespace std;

//��ǥ�� 2���� �迭�� ǥ��
//���������� �ڵ����� 0���� �ʱ�ȭ
int adj[101][101];
int cnt;

int main() {

	int x1, x2, y1, y2;

	for (int i = 1; i <= 4; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		
		for (int k = x1; k < x2; k++) {
			for (int j = y1; j < y2; j++) {
				if (!adj[k][j]) {
					cnt++;
					adj[k][j] = 1;
				}
			}
		}
	}

	cout << cnt << '\n';

	return 0;
}