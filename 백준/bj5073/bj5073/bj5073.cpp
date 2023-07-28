#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	while (true)
	{
		int arr[3];
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}
		if (arr[0] == 0) break;

		sort(arr, arr + 3);

		if (arr[2] >= arr[1] + arr[0]) {
			cout << "Invalid\n";
		}
		else {
			if (arr[0] == arr[1] && arr[0] == arr[2]) {
				cout << "Equilateral" << '\n';
			}
			else if (arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2]) {
				cout << "Scalene" << '\n';
			}
			else {
				cout << "Isosceles" << '\n';
			}
		}
	
	}
}