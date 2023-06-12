#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	//아홉 난쟁이의 키를 저장하는 배열
	vector<int> array(9);

	//키의 합을 저장하는 변수
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> array[i];
		sum += array[i];
	}

	sort(array.begin(), array.end());
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sum - array[i] - array[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (i == k || j == k) {
						continue;
					}
					cout << array[k] << '\n';
				}
				return 0;
			}
		}
	}
	
	
}