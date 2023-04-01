#include <iostream>

int main() {
	int num = 1;
	int total = 0;

	while (num <= 100) {
		std::cout << total << " + " << num << " = ";
		total += num;
		std::cout << total << std::endl;
		num++;
	}
	std::cout << "출력이 완료되었습니다." << std::endl;
}