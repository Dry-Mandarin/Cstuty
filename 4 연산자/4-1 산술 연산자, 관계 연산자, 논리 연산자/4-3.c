#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;

	++a;
	--b;

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}

/*
증감 연산자(++,--)
변수의 값을 1씩 증가시키거나 감소시킴
증감 연산자가 대입 연상을 포함하므로 =을 사용 하지 않음
즉 아래의 두 연상은 같은 연산
a=a+1; ++a;

반복문에서 루프마나 하나씩 더하더나 뺼 떄 자주 사용
*/