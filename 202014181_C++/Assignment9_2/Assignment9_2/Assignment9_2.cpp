#include<iostream>
#include<vector>
using namespace std;

int main() {

	//int���� �����ϴ� vector ��ü v ����
	vector<int> v;

	while (true)
	{
		//�Է¹޴� ���� ������ ����
		int num;

		cout << "������ �Է��ϼ���!(0�� �Է��ϸ� ����): ";
		cin >> num;

		//vector v ���� �ڿ� �Է¹��� ���� �ֱ�
		v.push_back(num);

		//0�� �Է��ϸ� �����ϴ� �κ�
		if (num == 0) break;


		cout << "�Էµ� ��: ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;

		//�� ��ȯ �� ��� ���
		int sum = 0;
		double avg;

		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}

		avg = static_cast<double>(sum) / v.size();
		cout << "���: " << avg << endl;

	}
	return 0;
}