/*#include "stdio.h"

int sort(int j, int *c) //int c[]
{
	int i=0,k=0,t=0;
	
	for (i = 0; i < j; i++) {
		for (k = i; k < j; k++) {
			if(c[i]<c[k]){
				t=c[i];
				c[i]=c[k];
				c[k]=t;
	       }
 		}
	}
 
	for (i = 0; i < j; i++) {
		printf("%d ", c[i]);
}
 

	return 1;
}

int main(void)
{
	int c[100]={0,};
	int j=0;
	char ch=0;
	
	scanf("%d", &j); // 크기값도 알아내야함

	for(int i=0;i<j;i++){
		scanf("%d ", &c[i]); 
	}
	sort(j, c); //첫번째 주소 값(&c[0])

	return 0;
}*/


# include <stdio.h>
int sort(int num[],int number);

int main()
{
	int  num[10] = {0,};
	int number,i;
	scanf("%d ",&number);
	
	for(i = 0; i<number; i++)
		scanf("%d",&num[i]);
		
	sort(num,number);
	
	for(i = 0; i<number; i++)
		printf("%d ",num[i]);
		
	return 0;
}

int sort(int num[], int number)
{
	int i,j,tmp;
	
	for(i = 0; i<number-1; i++)
	{
		for(j = i+1; j<number; j++)
		{
			if(num[j] > num[i])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
}
