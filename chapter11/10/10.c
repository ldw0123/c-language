// 2���� ������ �Է¹޾Ƽ� �ִ� ������� �ּ� ������� ��ȯ�ϴ� �Լ�. �ִ� ������� ��Ŭ������ ����� ����Ѵ�.
#include <stdio.h>
int gcd(int x, int y);
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main() {
	int n1, n2;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &n1, &n2);
	get_lcm_gcd(n1, n2, &n1, &n2);

	printf("�ּҰ������ %d�Դϴ�.\n�ִ������� %d�Դϴ�.", n1, n2);
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
	*p_gcd = gcd(x, y);				// �ּҰ����
	*p_lcm = (x * y) / *p_gcd;		// �ִ�����
}