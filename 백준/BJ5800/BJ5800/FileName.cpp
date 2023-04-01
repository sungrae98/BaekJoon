#include<iostream>
#include<algorithm>
using namespace std;

int Largest_gap(int array[], int N) {
	int i;
	int max = 0;
	for (i = 0; i < N - 1; i++) {
		if(max < array[i] - array[i + 1])
		max = array[i] - array[i + 1];
	}

	return max;
}

int main() {
	int class_Number;
	cin >> class_Number;

	for (int i = 0; i < class_Number; i++) {
		int student;
		cin >> student;

		int *score = new int[student]; //동적할당

		for (int j = 0; j < student; j++) {
			cin >> score[j];
		}

		sort(score, score + student, greater<int>()); //내림차순 정렬
		int max = score[0];
		int min = score[student - 1];

		cout << "Class " << i + 1 << endl;
		cout << "Max " << max << ", Min " << min << ", Largest gap " << Largest_gap(score, student) << endl;
	}
	

}