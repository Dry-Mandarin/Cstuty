#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a:%d\n", a);

	return 0;
}

/*
if ~ else ��
- else���� ���ǹ� ���X
 : ������ �������� ���� �� ������  else�� �����ϱ� ����
- ������ ������ �ι��� �̻��̸� �߰�ȣ�� �ݵ�� �����ֱ�
- if�� �ι����� if else�� ȿ�����ϼ��� �ִ�
*/
