#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a = %d, b= %d\n", a, b);
	printf("res = d\n", res);

	return 0;
}

/*
복합대입 연산자(+=, -=, *=, /=, %=)
연산 결과를 다시 피연산자에 저장

- 왼쪽 피연산자는 반드시 변수가 와야한다
- 오른쪽 하으이 계산이 모두 끝난 후, 즉 가장 마지막에 복합대입 연산자를 계산한다
*/