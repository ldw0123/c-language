// 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수
#include<stdio.h>

void array_copy(int* A, int* B, int size);

int main() {
	int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
	int b[10];
	array_copy(a, b, 10);

	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
}

void array_copy(int* A, int* B, int size) {
	int i;
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
}