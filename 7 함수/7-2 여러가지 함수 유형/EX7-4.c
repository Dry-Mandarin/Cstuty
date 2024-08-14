#include <stdio.h>

void print_line(void);  //함수선언

int main(void)
{
	print_line();   //함수호출
	printf("학번     이름   전공    학점\n");
	print_line();   ///함수호출

	return 0;

}

void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}
/*
 매개변수와 반환값이 모두 없는 함수
 ex. 일정한 문자열을 여러번 출력하는 함수
 -> 매개변수, 반환형에 모두 void사용

 14~23행 함수 정의에 return문이 없다. 또한 호출할 떄 값을 주지 않으며 호출은 수식의 일부가 아닌 독립된 문자으로 쓰인다

*/
