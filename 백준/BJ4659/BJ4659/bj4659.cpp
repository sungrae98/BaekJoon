#include<iostream>
using namespace std;

int main() {

	while (true)
	{
		string gather[] = { "a", "e","i","o","u"};
		string str;
		cin >> str;

		if (str == "end") {
			break;
		}

		for (int i = 0; i < 5; i++) {
			if (str.find(gather[i])) {
				cout << "<" << str << ">" << "is acceptable." << endl;
				break;
			}
			else {
				cout << "<" << str << ">" << "is not acceptable." << endl;
			}
		}
	}
}