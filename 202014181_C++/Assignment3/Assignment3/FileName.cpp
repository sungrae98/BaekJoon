#include<iostream>
using namespace std;

void swapArray(int(& arr1)[5], int(& arr2)[5]) {
	
	int temp[5];
	
	for (int i = 0; i < 5; i++) {
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}
}


int main() {
	int arr1[5], arr2[5];

	cout << "ù��° �迭�� ������ �Է��ϼ���: ";
	for (int i = 0; i < 5; i++) {
		cin >> arr1[i];
	}

	cout << "�ι�° �迭�� ������ �Է��ϼ���: ";
	for (int i = 0; i < 5; i++) {
		cin >> arr2[i];
	}

	swapArray(arr1, arr2);
	cout << "\n---After swapping---\n";
	cout << "\nù��° �迭: ";
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << " ";
	}

	cout << "\n�ι�° �迭: ";
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << " ";
	}

	return 0;
}