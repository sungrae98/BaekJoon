#include<iostream>
#include<stack>
using namespace std;

int main() {
	int k;
	cin >> k;

	stack<int> s;

	int sum = 0;
	int stack_size;

	for (int i = 1; i <= k; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}

	stack_size = s.size();

	for (int i = 1; i <= stack_size; i++) {
		sum += s.top();
		s.pop();
	}

	cout << sum;
	return 0;
}