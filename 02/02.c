// 2개의 정수의 합과 차를 반환하는 함수
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int sum = 0, diff = 0;

	
	get_sum_diff(100, 200, &sum, &diff);

	printf("원소들의 합 = %d\n", sum);
	printf("원소들의 차 = %d", diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;		// 100 + 200
	*p_diff = x - y;	// 100 - 200
}