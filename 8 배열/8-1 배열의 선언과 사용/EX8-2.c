#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}

/*
 배열과 반복문
  배열과 반복문을 사용하여 데이터의 양에 따라유현하고 손쉬운 대응이 가능해진다
  데이터의 수가 늘어나도 반복 횟수만 수정하면 간당하기 때문이다.
*/