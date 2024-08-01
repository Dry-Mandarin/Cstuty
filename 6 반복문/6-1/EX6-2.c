#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0; i, 3; i++)
	{
		a = a * 2;
	}
	printf("a:%d\n", a);
	
	return 0;
}

/*
 for문
  : 실행문을 원하는 횟수만큼 반복할떄 사용
 
 for(초식식; 조건식; 증감식)
 {
	실행문
 }

 - 초기식, 조건식, 증감식은 반복 횟수를 알기 쉽게 작성
 - 반복 횟수를 세는 변수는 반복문 안에서 바꾸지 않는것지 좋다
*/