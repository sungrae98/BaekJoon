//Manchester Encoding
#include <stdio.h>

void manchester(char input) {
	
	for (int i = 7; i >= 0; --i) {
		unsigned char bit = (input >> i) & 1;

		if (bit == 1) {
			printf("01");
		}
		else {
			printf("10");
		}
	}
}

int main() {
	char str[] = "DataCommunication";

	for (int i = 0; str[i]; i++) {
		manchester(str[i]);

		printf(" ");
	}
	return 0;
}