# include <stdio.h>

int main()
{
	int arr[10];
	int *p = arr;
	
	int i,odd=0,even=0;
	
	for(i = 0; i<10; i++)
	{
		scanf("%d ",&p[i]);
	}
	
	for(i = 0; i<10; i++)
	{
		if(p[i]%2 == 0)
		{
			even++;
		}
		else
			odd++;
	}
	
	printf("odd : %d\n",odd);
	printf("even : %d",even);
	return 0;
}