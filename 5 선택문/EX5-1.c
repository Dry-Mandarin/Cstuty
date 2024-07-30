#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a:%d, b:%d\n", a, b);
	
	return 0;

}

/*
제어문
선택문: if, switch ~ case
반복문: while, for, do ~ while
분기문: break, continue, goto, return
*/

/*
if문 기본형식

- 조건식+실행문
- 실행문은 { }로 묶기

- if문은 중관호를 사용하고 들여쓰기해 실행문 명확히 구분하는게 편함
- 실행할 문장 두 문장 이사이면 반드시 중괄호로 묶기
*/