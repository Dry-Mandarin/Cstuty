#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a:%d\n", a);

	return 0;
}

/*
if ~ else 문
- else에는 조건문 사용X
 : 조건을 만족하지 않을 떄 무조건  else를 실행하기 때문
- 실행할 문장이 두문장 이상이면 중괄호로 반드시 묶어주기
- if문 두번보다 if else가 효율적일수도 있다
*/
