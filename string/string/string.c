// 문자 배열을 선언하고 여기에 문자열을 저장하고 출력하는 함수
#include<stdio.h>

int main(void)
{
	int i;
	char str[4];	// 문자 배열을 선언하고 문자열을 저장

	str[0] = 'a';	// 문자 배열의 원소에 차례대로 문자를 저장
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';	// NULL 문자 저장

	i = 0;
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}