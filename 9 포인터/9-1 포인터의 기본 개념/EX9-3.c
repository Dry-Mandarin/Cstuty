#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pd;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pd = &b;

	*pt = *pa + *pd;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", * pa, *pd);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", * pg);

	return 0;
}

/*
 여러 가지 포인터 사용해 보기
  7행 - 포인터 선언.
        변수형이 같은 경우 포인터의 연속 선언 가능
		단, 기호*은 변수마다 붙여야 한다.
  8,9행 - 포인터의 선언과 동시에 초기화.
		  
		  포인터는 가리키는 변수의 자료형에 맞춰 선언.

  11,12행 - 7행에서 선언한 포인터에 각각 a와 b의 주소를 저장.

  이후부터는 포인터에 간접 참조 연산자를 사용해 가리키는 변수를 사용할 수 있다
  결국 일반 변수를 a,b, totoal, avg와 같은 이름으로도 사용할 수 있고 그 변수들을 가리키는 포인터를 간접 참조해도 사용할 수 있다.
*/