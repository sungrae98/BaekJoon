#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//���� ����
	int score;
	//�հ�
	int sum = 0;
	//���� ��ȣ�� ������ �迭
	int array[9];

	//���� ������ ����
	vector<int> vec;
	//
	vector<int> quiz;

	//vector�� ������ ��ȣ�� ����
	for (int i = 1; i < 9; i++) {
		cin >> score;
		array[i] = score;
		vec.push_back(score);
	}

	//���͸� �������� ����
	sort(vec.begin(), vec.end());

	//���� 5���� ������ ��
	for (int i = 3; i < 8; i++) {
		sum += vec[i];
		for (int j = 1; j < 9; j++) {
			if (vec[i] == array[j]) {
				quiz.push_back(j);
			}
		}
	}
	sort(quiz.begin(), quiz.end());
	cout << sum << endl;

	for (int i = 0; i < quiz.size(); i++) {
		cout << quiz[i] << " ";
	}

}
