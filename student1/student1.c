// ����ü ����
#include <stdio.h>
#include <stdlib.h>

struct student {				// ����ü student ����
	int number;
	char name[10];
	double grade;	
};

int main(void)
{
	struct student s;			// ����ü student�� ���� s ����
	
	s.number = 20210001;		// ����ü ���� s�� ����� ������ ����
	strcpy(s.name, "ȫ�浿");	// ���� �迭 name[]�� strcpy() �Լ��� ����ؾ� �Ѵ�. name = "ȫ�浿"; <- �Ұ���
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);		// ����ü ���� s�� ����� ������ printf()�� �̿��Ͽ� ���
	printf("�̸�: %s\n", s.name);		// ��� ������ . �� ����ü�� ����� �����ϴ� �������̴�.
	printf("����: %f\n", s.grade);

	return 0;
}