// 학생 10명의 학점을 100점 만점으로 변환해서 배열 scores[]에 저장하는 함수
#include <stdio.h>
void convert(double* grades, double* scores, int size);
void print(double* a, int size);

int main(void)
{
	double grades[10] = { 00.00, 00.50, 01.00, 02.00, 02.50, 03.00, 03.50, 04.00, 04.03 };	// 학생들의 학점
	double scores[10];

	convert(grades, scores, 10);
	print(scores, 10);

	return 0;
}

void convert(double* grades, double* scores, int size)	// 학점을 100점 만점 점수로 변환하는 함수
{
	int i;
	for (i = 0; i < size; i++) {
		scores[i] = 100.0 * (grades[i] / 4.3);
	}
}

void print(double* a, int size)		// 출력 함수
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%f ", a[i]);
	}
	printf("\n");
}