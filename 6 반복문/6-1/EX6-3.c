#include <stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2;
	} while a(a, 10);
	printf("a:%d\n", a);

	return 0;
}

/*
do ~ while문
while,for 문과 다르게 반복할 문장을 수행한 후에 조건을 검사

 do
 {
   반복할 실행문
 } while (조건식);

 - 조건식과 관계 없이 반복할 문장을 최소 한 번은 실행
/