#include <stdio.h>
#include <float.h>

int main() {

	/*roud - off errors(ex1)*/ 
	float a, b;
	a = 1.0e20f + 1.0f;
	b = a - 1.0320f;
	printf("%f\n", b); // 0.000000
	// ū ���ڿ� �ʹ� ���� ���ڸ� ���ϸ� ���� ���ڰ� ���������
	// ������ �ʹ� �ٸ� ���ڳ��� �����ϸ� ������ ���� �� ����

	/*/round - off errors(ex2)*/
	float c = 0.0f;
	for (int i = 0; i < 100; i++) {
		c += 0.01f;
	} 
	printf("%f\n", c); // 0.999999
	// �ε��Ҽ��� ǥ���������� 0.01�� ��Ȯ�� ǥ���� �� ����
	// ������ ������ �ž� �ٸ� ���� ����


	/*overflow*/
	float max = 3.402823466e+38f; // float�� ���� �� �ִ� ���� ū ����
	printf("%f\n");
	max *= 100.0f;
	printf("%f\n"); // inf ��� : (infinite) �ʹ�Ŀ�� ���� ��� �Ұ�

	/*underflow*/
	float e = 1.401298464e-45f;
	printf("%e\n", e);
	e /= 2.0f; // 0 ��� 
	// ���ڰ� �ʹ� �۾Ƽ� ����
	printf("%e\n", e);


	return 0;
}