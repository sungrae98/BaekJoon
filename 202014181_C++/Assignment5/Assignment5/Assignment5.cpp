#include<iostream>
using namespace std;

class BMI { //BMI 클래스 정의

private: // 접근 지정자는 private : class 외부에서는 접근 불가

	int number; //회원 번호
	string name; //회원 이름
	double height; //키를 나타내는 데이터 멤버
	double weight; //몸무게를 나타내는 데이터 멤버
	double bmi; //BMI지수를 나타내는 데이터 멤버
	int month; //등록한 개월 수
	char locker; //헬스 라카 이용 데이터 멤버

public: //Method의 Access modifier는 public

	void gymPayment(); // 메서드 gymPayment() 선언
	void getResult(); // 메서드 getResult() 선언
	bool gymLocker(); //메서드 gymLocker() 선언

	// 기본 Parameterized Constructor
	BMI(int num, string n, double h, double w) {

		number = num; //number 데이터 멤버에 인자로 받은 num값 할당
		name = n; //name 데이터 멤버에 인자로 받은 n값 할당, 고객 이름
		height = h / 100; //키를 m(미터) 단위로 변경, height 데이터 멤버에 인자로 받은 h값 할당
		weight = w; //weight 데이터 멤버에 인자로 받은 w값 할당
		bmi = weight / (height * height); //BMI = 몸무게 / (키 * 키) 입니다.

	}
};

void BMI:: gymPayment() {
	int m; //개월수를 저장하는 변수

	cout << "원하는 기간을 입력하세요(개월) : ";
	cin >> m;
	month = m; // month 데이터 멤버에 인자로 받은 m값 할당

	if (month == 1) {
		cout << "요금은 3만원 입니다." << endl;
	}
	else if (month == 3) {
		cout << "요금은 7만원 입니다." << endl;
	}
	else if (month == 6) {
		cout << "요금은 13만원 입니다." << endl;
	}
	else if (month == 12) {
		cout << "요금은 21만원 입니다." << endl;
	}
}

void BMI:: getResult() { //화면에 비만도 결과를 출력하는 메서드
	if (bmi <= 18.5) {
		//저체중
		cout << "회원 번호 : " << number << endl << name << "님 저체중입니다.";
		cout <<" "<< bmi << endl; //bmi지수를 출력
	}
	else if ((bmi > 18.5) && (bmi <= 22.9)) {
		//정상
		cout << "회원 번호 : " << number << endl << name << "님 정상입니다.";
		cout <<" "<< bmi << endl; //bmi지수를 출력
	}
	else if ((bmi > 22.9) && (bmi <= 24.9)) {
		//과체중
		cout << "회원 번호 : " << number << endl << name << "님 과체중입니다.";
		cout <<" "<< bmi << endl; //bmi지수를 출력
	}
	else {
		//비만
		cout << "회원 번호 : " << number << endl << name << "님 비만입니다.";
		cout <<" "<< bmi << endl; //bmi지수를 출력
	}
}

bool BMI:: gymLocker() {
	char l; //헬스장 사용여부를 받는 변수 

	cout << "헬스 라카를 이용하시겠습니까? (y/n) :";
	cin >> l;
	locker = l; // locker 데이터변수에 인자로 받은 l 값을 할당

	if (locker == 'y') {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	cout << "1개월 : 3만원/ 3개월 : 7만원/ 6개월 : 13만원/ 12개월 : 21만원" << endl;
	cout << endl;

	BMI rho(1, "노성래", 162, 61); //Parameterizef Constructor 호출
	rho.getResult();
	rho.gymPayment();

	bool use_locker = rho.gymLocker();

	if (use_locker) {
		cout << "라카 이용료 5천원이 추가됩니다." << endl;
	}

	cout << endl;

	BMI park(2, "박서준", 185, 72); //Parameterizef Constructor 호출
	park.getResult();
	park.gymPayment();
	use_locker = park.gymLocker();

	if (use_locker) {
		cout << "라카 이용료 5천원이 추가됩니다." << endl;
	}
}