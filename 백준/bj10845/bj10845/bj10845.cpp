#include<iostream>
#include<queue>
#include<string>

using namespace std;
//큐를 구현하는 문제
void Queue() {
	//명령의 수 n
	int n;
	cin >> n;
	string order;
	int num;

	queue<int> q;

	while (n--) {
		cin >> order;

		if (order == "push") {
			cin >> num;
			q.push(num);
		}
		else if (order == "pop") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (order == "size") {
			cout << q.size() << '\n';
		}
		else if (order == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (order == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
}

int main() {
	Queue();

	return 0;
}