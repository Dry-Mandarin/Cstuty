#include <stdio.h>
 
int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : % .1lf\n", res);

	a = (int)res;
	printf("(int)%.1lf의 결과 : %d\n", res, a);

	return 0;
}

/*
형 변환 연산자
피연산자 하나를 가지며, 피연산자의 값을 원하는 형태로 바꿈
ex)  정수 -> 실수, 실수 -> 정수

값을 복사해 일시적으로 형태를 바꾸므로 연산 후 메모리에 남아있는 피연사자의 형태나 값은 변함업음

형태
(자료형)피연산자
*/