#include <stdio.h>

int main() {
	/* 1. sizeof basic types*/

	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof (int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("Size of int type is %u bytes.\n", int_size1); // 4
	printf("Size of int type is %zu bytes.\n", int_size4); // 4
	// %zu : size_t에 대응하는 형식지정자
	printf("Size of int type is %zu bytes.\n", float_size); // 4

	/* size of arrays*/
	int int_arr[30];
	printf("Size of array = %zu bytes \n", sizeof(int_arr)); // 120 (4*30)
	return 0;

	/* size of charater array*/

	char c = 'a';
	char string[10]; // maximallly 0 character + '/0' (null character)

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type is %zu bytes.\n", char_size); // 1
	printf("Size of string type is %zu bytes. \n", str_size); // 10
}