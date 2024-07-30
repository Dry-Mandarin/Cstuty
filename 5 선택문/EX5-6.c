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
 switch ~ case��
  :�������� ��� �� ���ǿ� �ش��ϴ� �ϳ��� ��� �����ϴ°� 

  �Ϲ� ����
  switch ( ���ǽ� )
  {
   case �����1:
        ���๮1;
       break;
   case �����2:
        ���๮2;
       break;
   default:
       ���๮3;
       break;
  }

  - ���ǽ����� �����ĸ� ����ؾ� �Ѵ�.
    �� �̋� �������� ����� ������ �� �� �ְ� ������ ����� ���� �ᱣ���� �������� �Ѵ�.
    �� case�� ����ϴ� ����� ���� ������ ����

  - �⺻������ case�� break�� �����Ѵ�.

  break
      :�ش� ���� Ż���ϴµ� ���. 
  -�ʿ信 ���� ������ �� �ִ�.


*/
