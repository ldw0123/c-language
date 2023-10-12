// 포인터를 선언하고 변수의 주소를 포인터에 대입
#include <stdio.h>

int main(void)
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;		// 정수를 가리키는 포인터를 NULL값으로 초기화. NULL은 주소 0
	double* pf = NULL;	// double형 실수를 가리키는 포인터

	pi = &i;			// 포인터 pi에 변수 i의 주소를 대입
	pf = &f;
	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);
	return 0;
}