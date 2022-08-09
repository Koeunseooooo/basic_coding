// 실수 5개를 원소로 하는 배열을 선언하고 포인터 변수를 이용하여 입력과 출력을 실행하는 프로그램을 작성하시오 출력은 반올림하여 소수 첫째자리까지 출력하는 것으로 한다.

# include <stdio.h>

int main()
{
	double arr[5];
	double *p = arr;
	int i;
	
	for(i = 0; i<5; i++)
	{
		scanf(" %lf",&p[i]);
	}
	
	for(i = 0; i<5; i++)
	{
		printf("%.1lf ",p[i]);
	}
	
	return 0;
}
