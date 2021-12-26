// 정수형 배열 요소들의 합을 구하여 반환하는 함수
#include<stdio.h>

int array_sum(int* A, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

int main()
{
	int a[] = { 1,2,3,0,0,0,0,0,0,0 };		// 직원들의 월급을 저장
	int res = array_sum(a, 10);

	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	printf("월급의 합 = %d \n", res);
}