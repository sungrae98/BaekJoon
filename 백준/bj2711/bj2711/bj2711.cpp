#include<iostream>
#include<string>
using namespace std;

int main() {

	//테스트 케이스
	int test_case;
	cin >> test_case;
	 
	for (int i = 0; i < test_case; i++) {
		int num;
		string str;
		cin >> num >> str;

		for (int j = 0; j < str.length(); j++) {
			if (j+1 != num) {
				cout << str[j];
			}
		}
		cout << endl;
	}
	return 0;
}