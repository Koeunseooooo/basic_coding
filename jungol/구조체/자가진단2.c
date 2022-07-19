# include <stdio.h>
# include <string.h>

typedef struct Student{
	char school_name[21];
	int grade;
}Student;

int main()
{
	// Student a1 = {"Jejuelementary",6};
    Student a1,a2;
    strcpy(a1.school_name,"Jejuelementary");
    a1.grade=6;


	scanf("%s %d",a2.school_name,&a2.grade);
	printf("%d grade in %s School\n",a1.grade,a1.school_name);
	printf("%d grade in %s School",a2.grade,a2.school_name);
	
	return 0;
}

/*
typedef - struct 예약어 없이 구조체 쓰기

[형태]
typedef struct 구조체이름 {
    자료형 멤버이름;
} 구조체별칭;

[주의]
- 구조체 이름과 구조체 별칭은 겹쳐도 상관없음
- 구조체 이름이 아예 없어도 상관없음

*/