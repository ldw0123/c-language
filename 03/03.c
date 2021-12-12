// 정수 배열을 받아서 요소들을 난수로 채우는 함수
#include <stdio.h>
#include <stdlib.h>
void array_fill(int* A, int size);
void array_print(int* A, int size);

int main(void)
{
	int data[10];

	array_fill(data, 10);	// 배열을 매개변수로 전달

	array_print(data, 10);

	return 0;
}

void array_fill(int *A, int size)  // 배열을 매개변수로 받을 때는 void array_fill(int A[], int size)로 써도 동일함
{
	int i;
	for (i = 0; i < size; i++) {
		A[i] = rand();		// A[0]부터 A[9]까지 난수를 저장
	}
}

void array_print(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}