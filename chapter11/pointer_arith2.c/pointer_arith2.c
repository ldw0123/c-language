// 포인터의 증감 연산
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;		// pi가 가리키는 대상을 증가 (값이 증가)
	printf("i = %d, pi = %p\n\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;			// pi를 증가 (주소가 증가)
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}