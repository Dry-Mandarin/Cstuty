#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}

/*
문자열 정용 입출력 함수: gets, puts
gest - 빈칸을 포함해 한 줄 전체를 문자열로 입력
       엔터를 누르기 전까지 전체를 하나의 문자열로 배열에 저장한다.
	   입력할 배열의 크기를 검사하지 않으므로 배열의 크기보다 긴 문자열을 입력하면 배열을 벗어난 메모리 영역을 침범할 가능성이 있다.
	   따라서 입력할 떄 항상 배열의 크기를 고려해야 한다.
 gest(char형 배열명);

puts - gest함수와 짝을 이루는 문자열 출력 함수
       문자열 상수나 char형 배열의 배열명을 주면 문자열을 화면에 출력한다
	   printf함수의 출력 기능과 같다.
	   단, 문자열을 출력한 후에 자동으로 줄을 바꾼다
*/ 
