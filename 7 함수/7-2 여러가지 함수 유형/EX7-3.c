#include <stdio.h>

void print_char(char ch, int count);
	
int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i, count; i++)
	{
		printf("%c", ch);
	}

	return;
}
/*
 반환값이 없는 함수 
  함수는 기능에 따라 형태가 결정된다
  데이터를 받아서 단지 화면에 출력하는 함수라면 반환값이 필요 없다.
  반환값이 없는 함수는 선언과 정의의 반환형에 void를 사용한다

  반환값이 없는 함수는 return문을 생략할 수 있다.
  함수 실행 준간에 돌아가야 한 다면 return문을 함수 어디서든 사용 가능하
*/
