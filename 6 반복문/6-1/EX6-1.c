#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}
	printf("a:%d\n", 2);

	return 0;
}

/*
 while문
  조건식을 먼저 검사 -> 조건식이 참인 동안 실행문 반복
  while문의 조건식을 만족하지 못한 경우 -> 반복문 이후의 문장 실행

  *모든 반복문은 실행문을 중괄호로 묶어 반복한 부분을 표시
    단, 실행문이 한 문장일 경우 중괄호 생략 가능
*/
