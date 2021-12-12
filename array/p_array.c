// 포인터와 배열의 관계
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	
	printf("a = %u \n", a);				// 배열의 이름을 포인터처럼 사용
		
	printf("a + 1 = %u \n", a + 1);		// a + 1은 a보다 4가 크며, a[1]의 주소와 같다

	printf("*a = %d \n", *a);			// 배열의 이름이 포인터라고 했으므로, 배열의 이름이 가리키는 내용 *a를 출력하면 a[0]과 같다.

	printf("*a + 1 = %d \n", *(a + 1)); // *(a + 1) == a[1]
	
	return 0;
}

