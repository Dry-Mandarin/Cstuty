#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)   //ȣ�� Ƚ���� �Ű������� ����
{
	printf("apple\n");
	if (count == 3) return;  //ȣ�� Ƚ���� 3�̸� ��ȯ�ϰ� ������
	fruit(count + 1);   //��ȣ��� ȣ�� Ƚ���� 1 ����
}

/*
 �ڵ尡 �߰��� ����Ǵ� ���� �������� ���ᰡ �ƴϱ⿡ ���������� �����ϱ� ���� �ݺ� ���� ���� ���ǽ��� �ݵ�� ���ԵǾ�� �Ѵ�.
 ���� 7-5�� 3���� ȣ�ߵǵ��� ������ �ڵ��̴�
*/