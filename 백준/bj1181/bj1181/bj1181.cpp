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
	//단어의 개수
	int N;
	cin >> N;

	vector <string> v;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end(), compare);

	//중복원소 제거
	//unique 함수는 중복 원소를 vector의 제일 뒷부분(쓰레기 값)으로 보내버린다.
	//erase 중복된 원소들이 모여있는 뒷부분을 삭제한다.
	v.erase(unique(v.begin(), v.end()), v.end());


	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}