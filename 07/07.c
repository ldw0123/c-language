// A[]와 B[]를 더하여 배열 C[]에 저장하는 함수
#include <stdio.h>

void array_add(int* A, int* B, int* C, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}

void main()
{
	int A[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int B[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int C[10] = { 0 };		
	int i;

	array_add(A, B, C, 10);
	
	printf("A[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	printf("C[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", C[i]);
	}
}

