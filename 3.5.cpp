#include <stdio.h>
#include <limits.h> 
#include <stdlib.h>

int main() {


	unsigned int u_max = UINT_MAX + 1;

	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2); // 변수가 담고 있는 숫자를 2진수로 변경

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	return 0;
}