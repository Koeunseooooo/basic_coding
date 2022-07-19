# include <stdio.h>

int mon(int month,int date);

int main()
{
	int month,date;
	scanf("%d %d",&month,&date);
	
	if(mon(month,date) == 0)
	{
		printf("BAD!");
	}
	else
		printf("OK!");
}

int mon(int month, int date)
{
	if(date<1)
	{
		return 0;
	}
	
	switch(month)
	{
		case 1:
		case 2:
			return date <=29 ? 1 : 0;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return date <= 31 ? 1 : 0;
		default:
			return date <= 30 ? 1 : 0;	
	}
}