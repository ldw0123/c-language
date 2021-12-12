// 정수 배열의 요소들을 화면에 출력하는 함수

#include <stdio.h>
void array_print(int* A, int size);

int main(void)
{
	int arr[10] = { 1, 2, 3, 4 };

	array_print(arr, sizeof(arr)/sizeof(arr[0]));

	return 0;
}

void array_print(int* A, int size)
{
	int i;
	printf("A[] = { ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}