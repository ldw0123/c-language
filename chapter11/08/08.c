// ������ �迭 ��ҵ��� ���� ���Ͽ� ��ȯ�ϴ� �Լ�
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
	int a[] = { 1,2,3,0,0,0,0,0,0,0 };		// �������� ������ ����
	int res = array_sum(a, 10);

	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	printf("������ �� = %d \n", res);
}