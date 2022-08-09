# include <stdio.h>

struct Student{
	char name[21];
	char school_name[21];
	int grade;
};

int main()
{
	struct Student num;
	scanf("%s %s %d",num.name,num.school_name,&num.grade);
	printf("Name : %s\n",num.name);
	printf("School : %s\n",num.school_name);
	printf("Grade : %d",num.grade);
	
	return 0;
}