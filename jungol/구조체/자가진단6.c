# include <stdio.h>
# include <string.h>

typedef struct Person{
	char name[21];
	int height;
	float weight;
}Person;

int main()
{
	struct Person tmp;
	Person a[5];
	int i,j;


	
	
	for(i = 0; i<5; i++)
	{
		scanf("%s %d %f",a[i].name,&a[i].height,&a[i].weight);
	}
	
	for(i = 0; i<5; i++)
	{
		for(j = i; j<5; j++)
		{
			if(strcmp(a[i].name,a[j].name)>0)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("name\n");
	for(i = 0; i<5; i++)
	{
		printf("%s %d %.1f\n",a[i].name,a[i].height,a[i].weight);
	}
	
	for(i = 0; i<5; i++)
	{
		for(j = i; j<5; j++)
		{
			if(a[i].weight < a[j].weight)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	printf("\nweight\n");
	for(i = 0; i<5; i++)
	{
		printf("%s %d %.1f\n",a[i].name,a[i].height,a[i].weight);
	}
	
	return 0;
}