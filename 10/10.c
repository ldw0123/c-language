// 2개의 정수를 입력받아서 최대 공약수와 최소 공배수를 반환하는 함수. 최대 공약수는 유클리드의 방법을 사용한다.
#include <stdio.h>
int gcd(int x, int y);
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main() {
	int n1, n2;

	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d %d", &n1, &n2);
	get_lcm_gcd(n1, n2, &n1, &n2);

	printf("최소공배수는 %d입니다.\n최대공약수는 %d입니다.", n1, n2);
}

int gcd(int x, int y) {
	while (y != 0) {
		int tmp = x % y;
		x = y;
		y = tmp;
	}
	return x;

}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	*p_gcd = gcd(x, y);				// 최소공배수
	*p_lcm = (x * y) / *p_gcd;		// 최대공약수
}