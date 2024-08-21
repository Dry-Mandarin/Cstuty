#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int totoal = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)
	{
		totoal = +score[i];
	}
	avg = totoal / (double)count;

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}

/*
 sizeof 연산자를 활용한 배열 처리

 배열 요소의 개수 구하기
  sizeof(배열명) / sizeof(배열요소)

*/