#include <stdio.h>

int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;

	printf("��� �Է�: ");
	scanf("%d", &num);

	return 0;
}

/*
�Ű������� ���� �Լ�
 ȣ���� �Լ��κ��� ���� ���� �ʿ䰡 �������� �Ű������� �ʿ䰡 ����. 
 �̶� �Լ��� �Ű����� �ڸ����� void�� ����Ѵ�.
*/