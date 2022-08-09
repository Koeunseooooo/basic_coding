# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
	
	int *num1 = (int *)malloc(sizeof(int));
	int *num2 = (int *)malloc(sizeof(int));
	int *num3 = (int *)malloc(sizeof(int));
	
	scanf("%d %d",num1,num2);
	*num3 = abs(*num1-*num2);
	
	printf("%d",*num3);
	
	return 0;
}