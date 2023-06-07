#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//퀴즈 점수
	int score;
	//합계
	int sum = 0;
	//문제 번호를 저장할 배열
	int array[9];

	//퀴즈 점수를 저장
	vector<int> vec;
	//
	vector<int> quiz;

	//vector에 점수와 번호를 대입
	for (int i = 1; i < 9; i++) {
		cin >> score;
		array[i] = score;
		vec.push_back(score);
	}

	//벡터를 오름차순 정렬
	sort(vec.begin(), vec.end());

	//상위 5문제 점수의 합
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
