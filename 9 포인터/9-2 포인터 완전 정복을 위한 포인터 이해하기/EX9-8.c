#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 30;

	swap();
	printf("a:%d, b:%d\n",a, b);

	return 0;
}

void swap(void)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

/*
포인터 없이 두 변수의 값을 바꾸는 함수는 불가능한가?
 함수 안에 선언된 변수명은 사용 범위가 함수 내부로 제한되므로 main함수에 있는 변수 a,b는 다른 함수인 swap함수에서 이름을 사용할 수 없다

 7행에서 선언된 변수 a,b의 이름은 7~13행까지만 사용 가능하기 댸문에 컴파일 단계에서 문제가 발생한다.
*/