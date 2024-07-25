#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res);
	res = ++a * 3;
	printf("res = %d\n", res);
	res = a > b && a != 5;
	printf("res = %d\n", res);
	res = a % 3 == 0;
	printf("res = %d\n", res);

	return 0;
}

/*
연산자 우선순위와 연산방향

- 단항 연산자 > 이항 연산자 > 삼항 연산자 순으로 연산
- 산술 연산자 > (비트 이동 연산자) > 관계 연산자 > 논리 연산자 순으로 연산
- 우선순위가 같거나 동인한 연산자를 반복해서 사용시 왼쪽부터 차례로 연산
*/