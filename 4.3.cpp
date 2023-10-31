#include <stdio.h>

int main() {
	/* 숫자 배열*/
	int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

	/* 문자 배열*/
	char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c); // a
	printf("%s\n", str1); // Hello
	printf("%s\n", str2); // Hi

}