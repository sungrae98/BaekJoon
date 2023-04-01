#include<iostream>
using namespace std;

void count_plug(int& x) {
	int sum = 0 ; //¸ÖÆ¼ÅÇ ±¸¸Û ÇÕ

	for (int i = 0; i < x; i++) {
		int plug;
		cin >> plug;
		sum += plug;
	}
	
	int total = sum - (x - 1);

	cout << total << endl;
}

int main() {
	int N; // ¸ÖÆ¼ÅÇÀÇ °³¼ö

	cin >> N;
	count_plug(N);
}