// 포인터의 값을 변경
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;		// p는 x를 가리킨다
	printf("p = %d\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;		// p는 y를 가리킨다
	printf("p = %d\n", p);
	printf("*p = %d\n\n", *p);

	return 0;
}