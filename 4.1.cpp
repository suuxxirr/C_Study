#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char fruit_name[40]; // 1바이트 저장공간 40개 확보

	printf("what is your favorite fruit? : \n ");

	scanf("%s", fruit_name);
	// 문자열 출력 시에는 & 사용 X
	// 배열명 자체가 주소이기 때문에

	printf("You like %s!\n", fruit_name);

	return 0;
}