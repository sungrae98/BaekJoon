//Differential Manchester Encode
#include <stdio.h>

void differential_manchester(char input) {
	unsigned char last_bit = 1;
	
	for (int i = 7; i >= 0; --i) {
		unsigned char bit = (input >> i) & 1;

		if (bit == last_bit) {
			printf("10");
		}
		else {
			printf("01");
		}

		last_bit = bit;
	}
}

int main() {
	char str[] = "data";

	for (int i = 0; str[i]; i++) {
		differential_manchester(str[i]);

		printf(" ");
	}
	return 0;
}