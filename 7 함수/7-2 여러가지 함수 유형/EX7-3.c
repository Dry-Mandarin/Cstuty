#include <stdio.h>

void print_char(char ch, int count);
	
int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i, count; i++)
	{
		printf("%c", ch);
	}

	return;
}
/*
 ��ȯ���� ���� �Լ� 
  �Լ��� ��ɿ� ���� ���°� �����ȴ�
  �����͸� �޾Ƽ� ���� ȭ�鿡 ����ϴ� �Լ���� ��ȯ���� �ʿ� ����.
  ��ȯ���� ���� �Լ��� ����� ������ ��ȯ���� void�� ����Ѵ�

  ��ȯ���� ���� �Լ��� return���� ������ �� �ִ�.
  �Լ� ���� �ذ��� ���ư��� �� �ٸ� return���� �Լ� ��𼭵� ��� ������
*/
