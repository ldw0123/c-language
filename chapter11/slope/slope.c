// ������ y����� ���⸦ ���ϴ� ���α׷�
#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept)		// �� �� (x1, y1), (x2, y2)
{
	if (x1 == x2)		// �� ���� x��ǥ�� ������
		return -1;
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1);	// ������ ���⸦ ����
		*yintercept = y1 - (*slope) * x1;				// y������ ����
		return 0;
	}
}

int main(void)
{
	float s, y;			// s: ����  y: y����

	if (get_line_parameter(3, 4, 5, 8, &s, &y) == -1)
		printf("���� \n");
	else
		printf("����� %f, y������ %f \n", s, y);
}