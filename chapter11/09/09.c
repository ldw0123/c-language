// �־��� ���� �迭 A[]���� Ž���Ͽ� �迭 ����� �ε����� ��ȯ�ϴ� �Լ�
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
		printf("������ 200������ ����� %d��° �Դϴ�.\n", i + 1);
	}
}