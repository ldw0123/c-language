// ���� �迭�� �޾Ƽ� ��ҵ��� ������ ä��� �Լ�
#include <stdio.h>
#include <stdlib.h>
void array_fill(int* A, int size);
void array_print(int* A, int size);

int main(void)
{
	int data[10];

	array_fill(data, 10);	// �迭�� �Ű������� ����

	array_print(data, 10);

	return 0;
}

void array_fill(int *A, int size)  // �迭�� �Ű������� ���� ���� void array_fill(int A[], int size)�� �ᵵ ������
{
	int i;
	for (i = 0; i < size; i++) {
		A[i] = rand();		// A[0]���� A[9]���� ������ ����
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