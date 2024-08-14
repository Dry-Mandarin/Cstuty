#include <stdio.h>

int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;

	printf("양수 입력: ");
	scanf("%d", &num);

	return 0;
}

/*
매개변수가 없는 함수
 호출한 함수로부터 값을 받을 필요가 없을떄는 매개변수도 필요가 없다. 
 이때 함수의 매개변수 자리에는 void를 사용한다.
*/