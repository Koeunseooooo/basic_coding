# include <stdio.h>

int main()
{
	
	int num1,i;
	int *p = &num1;
	
	scanf("%d",p);
	
	for(i = 0; i<*p; i++)
	{
		printf("*");
	}
	
	
	return 0;
}