#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL;		// ������ ����

	p = &i;				// ���� i�� �ּҸ� p�� ����

	printf("i = %u\n", i);
	printf("&i = %u\n\n", &i);	

	printf("*p = %d\n", *p);
	printf("p = %d\n", p);		// i�� �ּ�

	return 0;
}