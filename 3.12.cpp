#include <stdio.h>
#include <float.h>

int main() {

	/*roud - off errors(ex1)*/ 
	float a, b;
	a = 1.0e20f + 1.0f;
	b = a - 1.0320f;
	printf("%f\n", b); // 0.000000
	// 큰 숫자와 너무 작은 숫자를 더하면 작은 숫자가 사라져버림
	// 범위가 너무 다른 숫자끼리 연산하면 에러가 생길 수 있음

	/*/round - off errors(ex2)*/
	float c = 0.0f;
	for (int i = 0; i < 100; i++) {
		c += 0.01f;
	} 
	printf("%f\n", c); // 0.999999
	// 부동소수점 표현법에서는 0.01을 정확히 표현할 수 없음
	// 오차가 누적이 돼어 다른 값이 나옴


	/*overflow*/
	float max = 3.402823466e+38f; // float이 가질 수 있는 가장 큰 숫자
	printf("%f\n");
	max *= 100.0f;
	printf("%f\n"); // inf 출력 : (infinite) 너무커서 전부 출력 불가

	/*underflow*/
	float e = 1.401298464e-45f;
	printf("%e\n", e);
	e /= 2.0f; // 0 출력 
	// 숫자가 너무 작아서 날라감
	printf("%e\n", e);


	return 0;
}