#include <stdio.h>

int main() {
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111; // 1 32개
	unsigned int oct = 037777777777; // 0 : 8진수 표현
	unsigned int hex = 0xffffffff; // 0x : 16진수 표현

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);


	return 0;
}