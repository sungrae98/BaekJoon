#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int N = 10; //���� 10��
	int target = 100;//���� 100��
	int sum = 0;

	for (int i = 0; i < N; i++) {
		int mushroom[10];
		cin >> mushroom[i];

		if (abs(sum + mushroom[i] - 100) <= abs(sum-100)) {
			sum += mushroom[i];
		}
		else {
			break;
		}
		
	}
	cout << sum;
}