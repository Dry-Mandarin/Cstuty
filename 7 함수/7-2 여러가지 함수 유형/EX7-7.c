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
	printf("jam\n");
}


/*
 재귀호출과 반복문의 차이점

 7-6에 출력문 하나를 더 넣어보자.
 jam이 2번 축되는것을 확인 할 수 있다

 재귀호출 함수의 경우 최초 호출한 곳이 아닌 직전에 호출했던 곳으로 되돌아간다.
 결국 재귀호출은 하나의 함수애서 코드를 반복 실행하는 것이 아닌, 새로운 함수를 실행하는것고 같다
 재귀호출 함수는 경우에 따라 복잡한 반복문을 간단히 표한할 수 있으나 코드 읽기가 쉽지 않고 반복 호출되면서 메모리를 사용하므로 제한적으로 쓰는 것이 좋다
*/