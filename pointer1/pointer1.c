#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL;		// 포인터 선언

	p = &i;				// 변수 i의 주소를 p에 대입

	printf("i = %u\n", i);
	printf("&i = %u\n\n", &i);	

	printf("*p = %d\n", *p);
	printf("p = %d\n", p);		// i의 주소

	return 0;
}