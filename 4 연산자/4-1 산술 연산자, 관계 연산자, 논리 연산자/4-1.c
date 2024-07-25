#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a의 값 : %d, b의 값:%d\n", a, b);
	printf("덧셈 : %d\n",sum);
	printf("뺄셈 : %d\n",sub);
	printf("곱셈 : %d\n",mul);
	printf("a의 음수 연산 : %d\n",inv);

	return 0;

}

/* 
피연산자의 개수에 따라 - 단항 연산자, 이항 연상자, 삼항 연산자

산술 연산자
더하기(+) 빼기(-) 곱하기(*) 나누기(/) 나머지(%)

대입 연산자(=)
상수,연산의 결과값으르 변수에 저장
*/