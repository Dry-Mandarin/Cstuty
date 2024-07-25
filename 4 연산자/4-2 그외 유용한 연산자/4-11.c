#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, B:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}

/*
콤마 연산자
한번에 여러 개의 수식을 차례로 나열할떄 사용
왼쪽부터 오른쪽으로 수행, 가장 오른쪽의 피연산자가 최종 결괏값

대입연산자보다 우선순위가 낮은 유일한 연산자, 따라서 대입연산자와 할꼐 사용시 반드시 괄호가 필요
*/