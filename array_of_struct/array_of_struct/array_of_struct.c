// ����ü �迭
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {			// ����ü student�� ������. / student�� number, name, grade�� 3���� ����� ���ǵȴ�. / ���� ����ü ������ ������� ����.
	int number;				// ����ü�� �Լ��� ���ο��� ������ �� ������, �Լ��� �ܺο� �����ϸ� ������ ��� �Լ����� ����� �� ����.
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];			// ����ü student�� �迭 list[]�� ����
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", list[i].name);		// name[]�� ���� �迭�̹Ƿ� scanf()���� �ּ� ������ &�� ������� �ʾҴ�. �迭�� �̸��� �� ��ü�� �������̴�.
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf", &list[i].grade);
	}

	printf("\n\n");
	for (i = 0; i < SIZE; i++)			// SIZE�� ũ�⸸ŭ �ݺ��ؼ� ���
		printf("�̸�: %s, ����: %f\n", list[i].name, list[i].grade);		// �迭 list[]�� ����� ������ ���

	return 0;
}