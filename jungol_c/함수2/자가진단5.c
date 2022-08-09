# include <stdio.h>
# include <math.h>

int mat(float num[3]);

int main()
{
	float num[3] = {0,};
	int i;
	
	for(i = 0; i<3; i++)
		scanf(" %f",&num[i]);
	
	mat(num);
}

int mat(float num[3])
{
	int i,j;
	float tmp;
	
	for(i = 0; i<2; i++)
	{
		for(j = 1; j<3; j++)
		{
			if(num[j] > num[i])
			{
				tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}
	printf("%.0f %.0f %.0f",ceil(num[0]),floor(num[2]),floor(num[1]+0.5));
}     