// 팩토리얼을 구하는 재귀함수
#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;						// n=1일 때 factorial(1)에 1을 반환하고 재귀호출을 끝냄
	else return n * factorial(n - 1);				// n과 factorial 함수에 (n - 1)을 넣어서 반환된 값을 곱함
}

int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("%d!은 %d입니다. \n", n, factorial(n));
	return(0);
}
