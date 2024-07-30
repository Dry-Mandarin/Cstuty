#include <stdio.h>

int main(void)
{
    int rank = 2, m = 0;

    switch (rank)
    {
        case 1:
            m = 300;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:
            m = 10;
            break;
    }
    printf("m:%d\n", m);

    return 0;
}

/*
 switch ~ case문
  :여러개의 상수 중 조건에 해당하는 하나를 골라 실행하는것 

  일반 형식
  switch ( 조건식 )
  {
   case 상수식1:
        실행문1;
       break;
   case 상수식2:
        실행문2;
       break;
   default:
       실행문3;
       break;
  }

  - 조건식으로 정수식만 사용해야 한다.
    ㄴ 이떄 정수식은 상수나 변수를 쓸 수 있고 수식을 사용할 떄는 결괏값이 정수여야 한다.
    ㄴ case에 사용하는 상수식 역시 정수만 가능

  - 기본적으로 case는 break를 포함한다.

  break
      :해당 블럭을 탈출하는데 사용. 
  -필요에 따라 생략할 수 있다.


*/
