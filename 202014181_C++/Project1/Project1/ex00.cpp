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
	std::cout << "����� �Ϸ�Ǿ����ϴ�." << std::endl;
}