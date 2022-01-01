// 주어진 값을 배열 A[]에서 탐색하여 배열 요소의 인덱스를 반환하는 함수
#include <stdio.h>
int search(int* A, int size, int search_value);


int main(void)
{
	int a[] = { 120, 100, 170, 230, 150, 200, 300, 350, 400, 250 };
	int size = sizeof(a) / sizeof(a[0]);

	search(a, size, 200);
}

int search(int* A, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++) {
		if (A[i] == search_value)
		printf("월급이 200만원인 사람은 %d번째 입니다.\n", i + 1);
	}
}