// 직선의 y절편과 기울기를 구하는 프로그램
#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept)		// 두 점 (x1, y1), (x2, y2)
{
	if (x1 == x2)		// 두 점의 x좌표가 같으면
		return -1;
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1);	// 직선의 기울기를 구함
		*yintercept = y1 - (*slope) * x1;				// y절편을 구함
		return 0;
	}
}

int main(void)
{
	float s, y;			// s: 기울기  y: y절편

	if (get_line_parameter(3, 4, 5, 8, &s, &y) == -1)
		printf("에러 \n");
	else
		printf("기울기는 %f, y절편은 %f \n", s, y);
}