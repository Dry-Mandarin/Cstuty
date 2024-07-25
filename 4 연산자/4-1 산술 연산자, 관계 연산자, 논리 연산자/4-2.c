#include <stdio.h>

int main(void)
{
	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}

/*
 나누기(/): 주어진 수를 나눈다, 결과값이 정수로 나누어 떨어지지 않을 경우 소수점까지 구함
 나머지(%): 몫을 뺸 나머지만 나타낸다
*/