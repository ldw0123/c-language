// ���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� �Լ�

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