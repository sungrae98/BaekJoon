#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int num_x = stoi(a);
	int num_y = stoi(b);

	string result = to_string(num_x + num_y);

	reverse(result.begin(), result.end());

	cout << stoi(result) << '\n';

	return 0;
}