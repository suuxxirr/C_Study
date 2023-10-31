#include <stdio.h>

int main() {
	char c = 'A';
	char d = 65; // d = 'A'

	printf("%c %hhd\n", c, c);
	// A 65
	// 문자로 출력할 때는 %c

	printf("%c %hhd\n", d, d); 
	// A 65

	printf("%c \n", c+1);
	// B
}