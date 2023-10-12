// �л� 10���� ������ 100�� �������� ��ȯ�ؼ� �迭 scores[]�� �����ϴ� �Լ�
#include <stdio.h>
void convert(double* grades, double* scores, int size);
void print(double* a, int size);

int main(void)
{
	double grades[10] = { 00.00, 00.50, 01.00, 02.00, 02.50, 03.00, 03.50, 04.00, 04.03 };	// �л����� ����
	double scores[10];

	convert(grades, scores, 10);
	print(scores, 10);

	return 0;
}

void convert(double* grades, double* scores, int size)	// ������ 100�� ���� ������ ��ȯ�ϴ� �Լ�
{
	int i;
	for (i = 0; i < size; i++) {
		scores[i] = 100.0 * (grades[i] / 4.3);
	}
}

void print(double* a, int size)		// ��� �Լ�
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%f ", a[i]);
	}
	printf("\n");
}