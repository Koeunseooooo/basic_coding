# include <stdio.h>

typedef struct Person{
	char name[21];
	int height;
}Person;

int main()
{
	Person a[5];
	int i,tmp,num=0;
	
	for(i = 0; i<5; i++)
	{
		scanf("%s %d",a[i].name,&a[i].height);
	}
	
	tmp = a[0].height;
	for(i = 1; i<5; i++)
	{
		if(tmp > a[i].height)
		{
			tmp = a[i].height;
			num = i;
		}

	}
	
	printf("%s %d",a[num].name,a[num].height);
	
	return 0;
}