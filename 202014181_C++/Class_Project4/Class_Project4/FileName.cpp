#include<iostream>
using namespace std;

class Date { //Date 클래스 정의
private: //접근 지정자는 private : class외부에서는 접근 불가
	int year; //년도를 나타내는 데이터 멤버
	int month; // 월을 나타내는 데이터 멤버
	int day; // 일을 나타내는 데이터 멤버

public: // Method의 Access modifier는 public
	void setDate(int yy, int mm, int dd) { //날짜를 설정하는 메서드
		year = yy; //year 데이터 멤버에 인자로 받은 yy값 할당
		month = mm; //month 데이터 멤버에 인자로 받은 mm값 할당
		day = dd; //day 데이터 멤버에 인자로 받은 dd값 할당
	}
	void setDisplay() { //화면에 출력하는 메서드
		cout << year << "." << month << "." << day << ".";
	}
};

int main() {
	Date birthday; //Date 클래스의 birthday 객체 생성

	birthday.setDate(1998, 01, 15); //birthday 날짜 설정

	birthday.setDisplay(); //birthday 날짜 출력
}