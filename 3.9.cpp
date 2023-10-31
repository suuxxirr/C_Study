#include <stdio.h>
#include <inttypes.h>

int main() {

	int i;
	int32_t i32; // i32라는 변수는 32비트의 메모리만 사용
	int_least8_t i8; // 적어도 8비트 사용
	int_fast8_t f8; // fastest minimum
	intmax_t imax; // biggest signed integers
	uintmax_t uimax; // biggest unsigned integers

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32); // 매크로로 교체

	return 0;
}