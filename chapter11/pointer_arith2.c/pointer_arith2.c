// �������� ���� ����
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;		// pi�� ����Ű�� ����� ���� (���� ����)
	printf("i = %d, pi = %p\n\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;			// pi�� ���� (�ּҰ� ����)
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}