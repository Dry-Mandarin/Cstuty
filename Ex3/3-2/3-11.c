#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}

// char�� ������ ���ڸ� �Է��ҋ��� Ű����� �Է��ϴ� ��� ���ڰ� ���
// �� �����̽���, ���͵� �� ���� ���
// ���ڿ� �Է½� �迭�� $��� ����