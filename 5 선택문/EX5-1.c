#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a:%d, b:%d\n", a, b);
	
	return 0;

}

/*
���
���ù�: if, switch ~ case
�ݺ���: while, for, do ~ while
�б⹮: break, continue, goto, return
*/

/*
if�� �⺻����

- ���ǽ�+���๮
- ���๮�� { }�� ����

- if���� �߰�ȣ�� ����ϰ� �鿩������ ���๮ ��Ȯ�� �����ϴ°� ����
- ������ ���� �� ���� �̻��̸� �ݵ�� �߰�ȣ�� ����
*/