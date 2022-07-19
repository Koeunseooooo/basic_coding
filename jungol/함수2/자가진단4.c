#include "stdio.h"

void area(int dat)
{
	printf("%.2f",(float)dat*dat*3.14);	
}

int main(void)
{
	int i=0,j=0,k=0,h=0,t=1;
	
	scanf("%d ",&k);
	area(k);

	return 0;
}