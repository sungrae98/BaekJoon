#include<iostream>
#include<vector>
using namespace std;

int main() {

	//int형을 저장하는 vector 객체 v 생성
	vector<int> v;

	while (true)
	{
		//입력받는 수를 저장할 변수
		int num;

		cout << "정수를 입력하세요!(0을 입력하면 종료): ";
		cin >> num;

		//vector v 제일 뒤에 입력받은 숫자 넣기
		v.push_back(num);

		//0을 입력하면 종료하는 부분
		if (num == 0) break;


		cout << "입력된 수: ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;

		//형 변환 후 평균 계산
		int sum = 0;
		double avg;

		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}

		avg = static_cast<double>(sum) / v.size();
		cout << "평균: " << avg << endl;

	}
	return 0;
}