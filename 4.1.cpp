#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char fruit_name[40]; // 1����Ʈ ������� 40�� Ȯ��

	printf("what is your favorite fruit? : \n ");

	scanf("%s", fruit_name);
	// ���ڿ� ��� �ÿ��� & ��� X
	// �迭�� ��ü�� �ּ��̱� ������

	printf("You like %s!\n", fruit_name);

	return 0;
}