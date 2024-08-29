#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a값 : %d\n", *pa);
	pa = &b;
	printf("변수 b값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a값 : %d\n", *pa);

	return 0;
}

/*
const를 사용한 포인터
const예약어를 포인터에 사용 - 가리키는 변수의 값을 바꿀 수 없다는 의미

6행에서 포인터 pa를 선언할 떄 const로 상수화
만약 const가 일반 변수처럼 포이터 값을 고정시킨다면 9행에서 pa는 다른 변수의 주로를 저장할 수 없다. 
그러나 출력 결과에서 pa는 const의 사용과는 무관하게 변수 b의 주소를 저장하고 그 값을 간접 참조해 출력한다
*/