#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b) {

	if (a.length() == b.length()) {
		return a < b;
	}

	return a.length() < b.length();
	
}

int main() {
	//�ܾ��� ����
	int N;
	cin >> N;

	vector <string> v;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end(), compare);

	//�ߺ����� ����
	//unique �Լ��� �ߺ� ���Ҹ� vector�� ���� �޺κ�(������ ��)���� ����������.
	//erase �ߺ��� ���ҵ��� ���ִ� �޺κ��� �����Ѵ�.
	v.erase(unique(v.begin(), v.end()), v.end());


	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}