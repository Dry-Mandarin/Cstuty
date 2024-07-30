#include <stdio.h>

int main(void)
{
	int a = 20, b = 10;

	if (a> 10)
	{
		if (b>=0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}
	
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

/*
if문 중첩

조건을 검사하기 전에 성행 보건이 있다면 if문 안에 if문을 넣어서 사용

사용이유
- 선행조건이 있으면 불필요한 검사를 하지 않음
- 선행조건이 없어도 실행 효율을 위해 의도적을 중첩해 사용 가능

*/
