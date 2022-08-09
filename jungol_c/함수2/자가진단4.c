# include <stdio.h>
# include <math.h>

float circle(int number);

int main()
{
	int number;
	scanf("%d",&number);
	
	printf("%.2f",circle(number));
	
	return 0;
}

float circle(int number)
{
	float sum = sqrt(number/3.14);
	return sum;
	
}