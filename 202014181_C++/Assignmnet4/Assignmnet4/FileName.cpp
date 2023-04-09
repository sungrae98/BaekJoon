#include<iostream>
using namespace std;

class BMI { //BMI 클래스 정의
private: // 접근 지정자는 private : class 외부에서는 접근 불가
	double height; //키를 나타내는 데이터 멤버
	double weight; //몸무게를 나타내는 데이터 멤버
	double bmi; //BMI지수를 나타내는 데이터 멤버

public: //Method의 Access modifier는 public
	void getBMI(double h, double w) { //BMI를 계산하는 메서드
		height = h / 100; //키를 m(미터) 단위로 변경, height 데이터 멤버에 인자로 받은 h값 할당
		weight = w; //weight 데이터 멤버에 인자로 받은 w값 할당
		bmi = weight / (height * height); //BMI = 몸무게 / (키 * 키) 입니다.
		
		cout << bmi << endl; //bmi지수를 출력
	}
	 
	void getResult() { //화면에 비만도 결과를 출력하는 메서드
		if (bmi <= 18.5) {
			//저체중
			cout << "저체중입니다.";
		}
		else if ((bmi > 18.5) && (bmi <= 22.9)) {
			//정상
			cout << "정상입니다.";
		}
		else if ((bmi > 22.9) && (bmi <= 24.9)) {
			//과체중
			cout << "과체중입니다.";
		}
		else {
			//비만
			cout << "비만입니다.";
		}
	}
};

int main() {
	BMI myBody; //BMI 클래스의 myBody 객체 생성

	myBody.getBMI(162, 60); // myBody BMI 지수 계산

	myBody.getResult(); // myBody 결과 출력
}