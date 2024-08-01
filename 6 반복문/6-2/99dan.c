//중첩 반복문으로 구구단 출력

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("i * %d = %d\n", j, i * j);
		}
		printf("\n");
	}

}

