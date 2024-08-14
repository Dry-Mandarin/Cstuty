#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)   //호출 횟수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) return;  //호출 횟수가 3이면 반환하고 끝낸다
	fruit(count + 1);   //재호출시 호출 횟수를 1 증가
}

/*
 코드가 중간에 종료되는 것은 정상적인 종료가 아니기에 정상적으로 종료하기 위함 반복 고리를 쓶을 조건식이 반드시 포함되어야 한다.
 위는 7-5를 3번만 호추되도록 수정한 코드이다
*/