#include <stdio.h>
#include <limits.h> 
#include <stdlib.h>

int main() {


	unsigned int u_max = UINT_MAX + 1;

	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2); // ������ ��� �ִ� ���ڸ� 2������ ����

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	return 0;
}