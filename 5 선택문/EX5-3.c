#include <stdio.h>

int main(void)
{
	int a = 0 , b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b:%d\n", b);
	return 0;
}

/*
if ~ else if ~ else문

조건식1 실행문1
조건식2 실행문2
엘스 실행문2

조건식을 차례로 검사하므로 이전 조건의 결과가 반영된다
*/