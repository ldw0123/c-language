// �ּ� ������ &
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i�� �ּ�: %u\n", &i);	// ���� i�� �ּ� ���
	printf("c�� �ּ�: %u\n", &c);	// ���� c�� �ּ� ���
	printf("f�� �ּ�: %u\n", &f);	// ���� u�� �ּ� ���

	return 0;
}