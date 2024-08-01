#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum += i;
        if (sum > 30) break;
    }

    printf("누적한 값 : %d\n", sum);
    printf("마지막으로 더한 값 : %d\n", i);

    return 0;
}

/*
break와 continue분기문

break
 : 반복문 안에서 반복을 즉시 끝냄
   조건식이 거짓이 아니더라도 임의로 반복문을 끝낼 수 있다.

   주의 - break는 자신의 포함하는 반복문 하나만 벗어난다.

continue
 : 반복문의 일부를 건너뛴다
   이를 사용하면 다음 실행 위치가 반복문의 블복 끝이 된다.(블록 탈출X)
     -> 조건에 따라 반복문의 일부를 제외하고 반복 가능하다.


   ex)
                 for (i = 1; i <= 100; i++)
                    {
                        if ((i % 3) == 0)
                        {
                        continue;
                        }
                        sum += i;
                    }
    continue에 의해서 제어가 블록의 끝으로 이동한 후에는 다시 반복이 시작된다. -> 겨룩 다음 실행 위치는 중감식이 된다.
*/
