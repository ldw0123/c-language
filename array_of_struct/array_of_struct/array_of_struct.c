// 구조체 배열
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {			// 구조체 student를 선언함. / student는 number, name, grade의 3개의 멤버로 정의된다. / 아직 구조체 변수는 선언되지 않음.
	int number;				// 구조체를 함수의 내부에도 선언할 수 있지만, 함수의 외부에 선언하면 파일의 모든 함수에서 사용할 수 있음.
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];			// 구조체 student의 배열 list[]가 선언
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);		// name[]은 문자 배열이므로 scanf()에서 주소 연산자 &를 사용하지 않았다. 배열의 이름은 그 자체로 포인터이다.
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}

	printf("\n\n");
	for (i = 0; i < SIZE; i++)			// SIZE의 크기만큼 반복해서 출력
		printf("이름: %s, 학점: %f\n", list[i].name, list[i].grade);		// 배열 list[]에 저장된 값들을 출력

	return 0;
}