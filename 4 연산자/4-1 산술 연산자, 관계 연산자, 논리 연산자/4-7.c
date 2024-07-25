#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	printf("%d + %d =%d\n", a, b, a + b);

	res = a + b;
	printf("%d + %d = %d\n", a, b, res);

	return 0;
}
/*
연산 실행 후 결과값을 변수에 저장X -> 그 값 버려짐
*/