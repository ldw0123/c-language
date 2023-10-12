// 구조체 선언
#include <stdio.h>
#include <stdlib.h>

struct student {				// 구조체 student 선언
	int number;
	char name[10];
	double grade;	
};

int main(void)
{
	struct student s;			// 구조체 student의 변수 s 선언
	
	s.number = 20210001;		// 구조체 변수 s의 멤버에 값들을 대입
	strcpy(s.name, "홍길동");	// 문자 배열 name[]은 strcpy() 함수를 사용해야 한다. name = "홍길동"; <- 불가능
	s.grade = 4.3;

	printf("학번: %d\n", s.number);		// 구조체 변수 s에 저장된 값들을 printf()를 이용하여 출력
	printf("이름: %s\n", s.name);		// 멤버 연산자 . 는 구조체의 멤버를 참조하는 연산자이다.
	printf("학점: %f\n", s.grade);

	return 0;
}