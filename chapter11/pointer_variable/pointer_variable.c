// �����͸� �����ϰ� ������ �ּҸ� �����Ϳ� ����
#include <stdio.h>

int main(void)
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;		// ������ ����Ű�� �����͸� NULL������ �ʱ�ȭ. NULL�� �ּ� 0
	double* pf = NULL;	// double�� �Ǽ��� ����Ű�� ������

	pi = &i;			// ������ pi�� ���� i�� �ּҸ� ����
	pf = &f;
	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);
	return 0;
}