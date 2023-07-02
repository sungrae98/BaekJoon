#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

	while (true)
	{
		string number;
		cin >> number;

		string palindrome = number;

		//0이 입력되면 종료
		if (number == "0") {
			break;
		}

		reverse(number.begin(), number.end());
		
		if (palindrome == number) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
	return 0;
}