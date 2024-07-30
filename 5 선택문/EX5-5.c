#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}


	return 0;

}

/*
else 결합 문제
문법적으로 if문을 조건에 따라 실행할 문장이 한 문장인 경우 중괄호를 생략할 수 있다.
그러나 이 경우에도 중첩 if문에서 중괄호를 반드시 써야하는 경우가 있다.
if ~ else문이 참일때 실행문으로 기본 if문이 쓰이면 반드시 중괄호가 필요하다.

if ~ else문 안에 단독으로 if문을 쓸때 반드시 중괄호
*/
