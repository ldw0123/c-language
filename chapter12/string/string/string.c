// ���� �迭�� �����ϰ� ���⿡ ���ڿ��� �����ϰ� ����ϴ� �Լ�
#include<stdio.h>

int main(void)
{
	int i;
	char str[4];	// ���� �迭�� �����ϰ� ���ڿ��� ����

	str[0] = 'a';	// ���� �迭�� ���ҿ� ���ʴ�� ���ڸ� ����
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';	// NULL ���� ����

	i = 0;
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}