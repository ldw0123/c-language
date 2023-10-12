// 간접 참조 연산자 *를 이용하여 포인터가 가리키는 변수의 값을 변경
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* p;

	p = &i;		// p가 i를 가리킨다
	printf("i = %d\n", i);

	*p = 20;	// p가 가리키는 위치에 20을 저장
	printf("i = %d\n", i);

	return 0;
}