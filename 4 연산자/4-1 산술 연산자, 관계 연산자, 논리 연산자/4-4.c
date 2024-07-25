#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;
	
	printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
	printf("전위형:(++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

	return 0;
}

/*
전위표기: 증감하고 나서 연산에 사용
 ㄴ ++a
후위표기: 연산에 사용하고 나서 증감
 ㄴ a++
*/