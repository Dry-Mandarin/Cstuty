#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a,b);
	printf("a:%d, b:%d\n",a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

/*
9행에서 함수를 호출할 때 main 함수의 변수 a,b의 값으 복사되어 15행의 매개변수 x,y에 저장
결국 swap 함수 안에서는 a,b의 복사본을 바꾸므로 main 함수의 두 변수 a,b의 값은 변함이 없게 된다.
이름이 같아도 함수가 다르면 메모리에 별도의 저장 공간을 확보하므로 전혀 다른 변수로 사용된다

함수는 오직 하나의 값만을 반환할 수 있으므로 한 번의 함수 호출을 통해 두 변수의 값을 바꿀수는 없다.
*/