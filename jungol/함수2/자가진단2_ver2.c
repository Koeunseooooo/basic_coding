#include "stdio.h"

int check(int i, int j)
{
	int res=0;
	
	int c[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
 	if(c[i]<j || j<1)	res=0;
 	else		res=1;

	return res;
}

int main(void)
{
	int c[100]={0,};
	int i=0,j=0,k=0,h=0,t=0,u=0;
	char ch=0;
	
	scanf("%d %d", &i, &j);

	if(check(i,j)==0)
		printf("BAD!");
	else
		printf("OK!");

	return 0;
}