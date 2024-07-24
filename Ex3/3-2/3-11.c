#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}

// char형 변수에 문자를 입력할떄는 키보드로 입력하는 모든 문자가 대상
// 즉 스페이스바, 엔터도 한 문자 취급
// 문자열 입력시 배열명에 $사용 없음