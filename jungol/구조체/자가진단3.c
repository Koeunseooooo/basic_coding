# include <stdio.h>

typedef struct Person{
	char name[21];
	int korean;
	int english;
}Person;

int main()
{
	Person a1;
	Person a2;
	
	scanf("%s %d %d",a1.name,&a1.korean,&a1.english);
	scanf("%s %d %d",a2.name,&a2.korean,&a2.english);
	
	printf("%s %d %d\n",a1.name,a1.korean,a1.english);
	printf("%s %d %d\n",a2.name,a2.korean,a2.english);
	printf("avg %d %d",(a1.korean+a2.korean)/2,(a1.english+a2.english)/2);
	
	return 0;
}