#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	//�׽�Ʈ ���̽��� ����
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//����ؾ��� ������ ��
		int p;
		cin >> p;

		//���ݰ� �̸��� ������ vector��ü ����
		vector<int>vPrice(p);
		vector<string>vName(p);
		
		int max = 0;
		string name;

		for (int i = 0; i < p; i++) {
			//���ݰ� �̸��� �Է¹޾� vector�� ����
			cin >> vPrice[i] >> vName[i];

			if (max < vPrice[i]) {
				max = vPrice[i];
				name = vName[i];
			}
		}
		cout << name << endl;
	}
	
}