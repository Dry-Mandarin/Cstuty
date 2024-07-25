#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != c);
	printf("a != c : %d\n", res);
	
}
/*
관계 연산자
대소관계: <, >
동등관계: ==(같다), !=(같지않다)

연산의 결과값이 1(참)또는 0(거짓)

*/