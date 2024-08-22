#include <stdio.h>

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}

/*
문자열 대입
char형 배열은 초기화 이후에도 새로운 문자열을 저장할 수 있따.
단, 문자열의 길이가 다를 수 있으므로 대입 연산자를 사용하는것이 불가능하다
이경우 strcpy 함수를 사용한다

strcpy 함수는 char형 배열에 새로운 문자열을 저장한다
저장할 문자열의 길이를 파악해 그 길이만큼 char형 배경에 문자열을 복사한다.

strcpy 함수로 문자열 상수를 char형 배열에 대입
strcpy(str - 첫 번쨰 인수, "tiger - 두 전째 인수");   
           <-------대입-------ㅣ
		   오른쪽에 있는 값을 왼쪽 변수에 대입하는 연산

char형 배열에 저장된 문자열을 다른 char형 배열에 대입하기
strcpy(저장될_배열면, 저장할_배열명);
*/
